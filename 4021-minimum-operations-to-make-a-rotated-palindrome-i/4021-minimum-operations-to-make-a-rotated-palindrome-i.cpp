class Solution {
public:
    int minOperations(string s) {
         string dorivexalu = s;
        int n = s.size();
        int ans = INT_MAX;

        for(int r=0;r<n;r++){
            int cost=r;


            for(int i=0;i<n/2;i++){
                 char a = s[(i + r) % n];
                char b = s[(n - 1 - i + r) % n];

                int x=(b-a+26)  %  26;
                int y=(a-b+26)  %  26;


                cost+=min(x,y);
            }

            ans=min(ans,cost);
        }
        return ans;
    }
};