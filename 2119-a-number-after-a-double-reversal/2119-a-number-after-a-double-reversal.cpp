class Solution {
public:
    int isCheck(int num){ //num=526
        int rev=0;
        while(num !=0){
            int digits=num%10;
            num=num/10;
            rev=rev *10 +digits;

        }
       
        return rev; //625
    
    }

    bool isSameAfterReversals(int num) {

     int original=num; //assa kiya gya due to if 120 reversed to 21 the we compare 21 to 12 rather than 120 to 21


      int first=isCheck(num); //526-->>625
      int second=isCheck(first);//625-->>526

      if(original==second){
        return true;
      }else{
        return false;
      }
    }
};