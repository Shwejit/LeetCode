class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int c=num1;c<=num2;c++){
            string i=to_string(c);
             for(int j=1;j<i.size()-1;j++){
                if((i[j]<i[j-1] && i[j]<i[j+1]) || (i[j]>i[j+1] && i[j]>i[j-1])){
                    count++;
                }
             }
        }
        return count;
    }
};