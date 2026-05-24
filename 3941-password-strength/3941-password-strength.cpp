class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<int,int> mpp;
        int points=0;
        for(int i=0;i<password.size();i++){
            mpp[password[i]]++;
            if(mpp[password[i]]<=1){
                if(password[i] >= '0' && password[i]<= '9'){
                    points+=3;
                }
                else if(password[i] >= 'a' && password[i] <= 'z'){
                    points+=1;
                }
                else if(password[i] >= 'A' && password[i] <= 'Z'){
                    points+=2;
                }
                else{
                    points+=5;
                }
            }
        }
        return points;
    }
    
};