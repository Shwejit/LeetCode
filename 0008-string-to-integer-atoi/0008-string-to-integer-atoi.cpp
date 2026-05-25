class Solution {
public:
    int myAtoi(string s) {
    int n=s.length();
    long long num=0;
    int i=0;
    int sign=1;
    while(i<n && s[i]==' '){
        i++;
    }
    if(i<n && (s[i]=='+'|| s[i]=='-')){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }
    while(i<n && isdigit(s[i])){
        num=num*10+(s[i]-'0');
        if(num>INT_MAX){
            if(sign==-1){
            return INT_MIN;
            }
           else{
            return INT_MAX;
           } 
        }
        i++;
    }
    return num*sign;
  }
};