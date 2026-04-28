class Solution {
public:

    bool countDays(vector<int> bloomDay, int m, int k, int days){
        int count=0;
        int bouq=0;
        for(int b:bloomDay){
            if(b<=days){
                count++;
                if(count==k){
                    bouq++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size()) return -1;
        int low= *min_element(bloomDay.begin(), bloomDay.end());
        int high= *max_element(bloomDay.begin(), bloomDay.end());

        int mid;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            int day=countDays(bloomDay,m,k,mid);
            if(day){
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