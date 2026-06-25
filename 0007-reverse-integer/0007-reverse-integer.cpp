class Solution {
public:
    int reverse(int x) {

        int rev=0;
        while(x !=0){
        int digits=x%10;


        if(rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;
                //to check and mainatin overflow

        rev=rev*10 + digits;
        x=x/10;

        }

        return rev;
    }
};