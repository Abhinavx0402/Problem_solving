class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        int maxfreq = 0;
        int element = -1;

        for (auto it : mp) {
            if (it.first % 2 == 0) {        // even number
                if (it.second > maxfreq) {
                    maxfreq = it.second;
                    element = it.first;
                }
                else if (it.second == maxfreq && it.first < element) {
                    element = it.first;
                }
            }
        }

        return element;
    }
};