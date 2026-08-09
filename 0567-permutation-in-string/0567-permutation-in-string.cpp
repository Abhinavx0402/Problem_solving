class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> freq(26, 0);
        vector<int> window(26, 0);

        for (char c : s1) {
            freq[c - 'a']++;
        }


        int k = s1.size();
        int n = s2.size();

        if(k>n){
            return false;
        }

        for (int i = 0; i < k; i++) {
            window[s2[i] - 'a']++;
        }

        if (freq == window) {
            return true;
        };

        // slide
        for (int i = k; i < n; i++) {
            window[s2[i] - 'a']++; // add new

            window[s2[i - k] - 'a']--; // remove

            if (window == freq) {
                return true;
            }
        }

        return false;
    }
};