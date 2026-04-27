class Solution {
public:

    int countDays(vector<int>& weights, int capacity){
        int days=1;
        int load=0;
        for(int w:weights){
            if(load+w>capacity){
                days++;
                load=w;
            }
            else{
                load+=w;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);

        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int neededdays=countDays(weights, mid);

            if(neededdays<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};