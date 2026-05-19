class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int n=isConnected.size();
        if(n==0){
            return 0;
        }
        vector<bool>visited(n,false);
        stack<int>s;
        for(int j=0;j<n;j++){
            if(!visited[j]){
                s.push(j);
                ans++;
                while(!s.empty()){
                    int x=s.top();
                   
                     s.pop();
                    for(int i=0;i<n;i++){
                        if(isConnected[x][i] &&i!=x&&!visited[i]){
                             visited[i]=true;
                            s.push(i);
                         }   
                     }
                 }
            }
        }

        
        return ans;
    }
};