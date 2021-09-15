class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            n=convertNum(n);
        }
        return n==1;
    }
    
    int convertNum(int n){
        int num=0;
        while(n){
            num+=pow((n%10),2);
            n/=10;
        }
        return num;
    }
};