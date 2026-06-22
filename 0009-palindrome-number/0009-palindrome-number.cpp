class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0 || (x % 10== 0 && x!=0)){
        return false;
    }
    int reverse=0;
    while(x>reverse){
        int lastdigit = x % 10;
        reverse=reverse* 10 + lastdigit;
        x=x/10;
    }
    return( x == reverse || x == reverse / 10);   
    }
};