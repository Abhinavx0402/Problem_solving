class Solution {
public:
    int isCheck(int x) {
        int rev = 0;
        while (x != 0) {
            int digits = x % 10;
            x = x / 10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev = rev * 10 + digits;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        if(x <0){
            return false;
        }

        int original = x;
        int pal = isCheck(x);

        if (pal == original) {
            return true;
        } else {
            return false;
        }
    }
};