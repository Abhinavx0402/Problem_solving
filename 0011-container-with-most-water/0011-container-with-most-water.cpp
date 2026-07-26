class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int n=height.size();
        int end=n-1;
        int area=0;

        while(st<=end){
            int w=end-st;
            int h=min(height[st],height[end]);

            int currarea=w*h;

            area=max(area,currarea);

            if(height[st]<height[end]){
                st++;
            }else{
                end--;
            }


        }
        return area;
    }
};