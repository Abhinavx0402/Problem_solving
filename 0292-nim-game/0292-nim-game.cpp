class Solution { //***************Author:- KaiHiwatari  *************************************//
public:
    bool canWinNim(int n) {
        if(n%4 == 0){ // if this condition is true then we always lose as we can pick from 1 to 3 stones at a time 
            return false; 
        }else{ // otherwise we always win 
            return true; 
        }
    }
};