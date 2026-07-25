class Solution {
public:
    int maxProduct(int n) {
        int fm = 0;
        int sm =0;
        while(n>0){
            int digit = n%10;
            if(digit>fm){
                sm=fm;
                fm=digit;
            }
            else if(digit>sm){
                sm=digit;
            }

            n=n/10;
        }

        return fm*sm;
    }
};