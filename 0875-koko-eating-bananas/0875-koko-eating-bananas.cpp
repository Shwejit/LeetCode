class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
        maxi=max(maxi,piles[i]);
        }

        int start = 1;
        int end = maxi;
        int mid;int ans;
        while(start<=end){

            mid=start+(end-start)/2;
            long long sum=0;
            for(int i=0;i<piles.size();i++){
                sum += ceil((double)piles[i] / (double)mid);
            }

            if(sum <= h){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};