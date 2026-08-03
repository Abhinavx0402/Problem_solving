class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int count = 0;
        int n = s.length();

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }

        int ans = count;

        // slide

        for (int i = k; i < n; i++) {

            if (isVowel(s[i - k])) {
                count--;
            }

            if (isVowel(s[i])) {
                count++;
            }

            ans = max(ans, count);
        }
        return ans;
    }
};