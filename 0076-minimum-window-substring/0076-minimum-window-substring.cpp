class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> freq(128, 0);
        vector<int> window(128, 0);

        int n = s.size();
        int k = t.size();

        if (k > n) {
            return "";
        }

        // Frequency of characters in t
        for (char c : t) {
            freq[c]++;
        }

        int i = 0;
        int j = 0;

        int minlen = INT_MAX;
        int start = 0;

        int count = 0;

        while (j < n) {

            // Expand window
            window[s[j]]++;

            if (freq[s[j]] > 0 &&
                window[s[j]] <= freq[s[j]]) {
                count++;
            }

            // Window is valid
            while (count == k) {

                // Update minimum window
                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    start = i;
                }

                // Remove left character
                window[s[i]]--;

                if (freq[s[i]] > 0 &&
                    window[s[i]] < freq[s[i]]) {
                    count--;
                }

                i++;
            }

            j++;
        }

        if (minlen == INT_MAX) {
            return "";
        }

        return s.substr(start, minlen);
    }
};