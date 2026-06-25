class Solution {
public:
int calc(int n) {
    int sum = 0;

    while(n > 0) {
        int digit = n % 10;     // take last digit
        sum += digit * digit;   // add square
        n = n / 10;             // remove last digit
    }

    return sum;
}
    bool isHappy(int n) {

    unordered_set<int> seen;

    while(n != 1) {

        if(seen.find(n) != seen.end()) {
            return false;   // cycle found
        }

        seen.insert(n);

        n = calc(n);   // generate next number
    }

    return true;
}
};