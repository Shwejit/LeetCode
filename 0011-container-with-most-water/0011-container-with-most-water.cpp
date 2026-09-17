class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
        int maxi=INT_MIN;
        int current_area;
        while(i<j){
            current_area=(j-i)*min(height[i],height[j]);
            maxi=max(maxi,current_area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
            
    }
};