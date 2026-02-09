class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        //BRUTE FORCE
        // unordered_map<char,int> mpp;
        // int count=0;
        // for(int i=0;i<chars.length();i++){
        //     mpp[chars[i]]++;
        // }
        // for(int j=0;j<words.size();j++){
        //     string c=words[j];
        //     count+=c.length();
        //     unordered_map<char,int> temp = mpp;
        //     for(int k=0;k<c.length();k++){
        //         if(temp[c[k]]<=0)
        //         {
        //             count-=c.length();
        //             break;
        //         }
        //         else{
        //             temp[c[k]]--;
        //         }
        //     }
        // }
        // return count;

        //OPTIMAL
        int arr1[128]={0};
        for(int i=0;i<chars.length();i++){
            arr1[chars[i]]++;
        }
        int len=0;
        

        for(int j=0;j<words.size();j++){
            int arr2[128]={0};
            bool ans=true;
            for(int k=0;k<words[j].length();k++){
                arr2[words[j][k]]++;
            }
            for(int i=0;i<128;i++){
                if(arr2[i]>arr1[i]){
                    ans=false;
                }
            }
            if(ans==true){
                len+=words[j].size();
            }
        }
        return len;

    }
};