class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true) {

            int smallest = n;
            int product = 1;

            while (smallest > 0) {
                int digits = smallest % 10;
                product *= digits;
                smallest /= 10;
            }

            if (product % t == 0) {
                return n;
            }

            n++;
        }
    }
};