class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        int sum = 0;

        // Build first window
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int ans=sum;

        for (int i = k; i < n; i++) {

            if (sum / k >= threshold) {
                count++;
            }

            // Always slide the window
            sum += arr[i];
            sum -= arr[i - k];

            ans=max(ans,sum);
        }

        // Check the last window
        if (sum / k >= threshold) {
            count++;
        }

        return count;
    }
};