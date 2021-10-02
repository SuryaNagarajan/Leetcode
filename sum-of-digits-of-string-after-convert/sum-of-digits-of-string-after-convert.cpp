class Solution {
public:
    int getLucky(string s, int k) {
        string num;
        for(int i=0;i<s.size();i++){
            num+=to_string((s[i]-'a')+1);
        }
        
        while(k--){
            int sum=0;
            for(int i=0;i<num.size();i++){
                sum+=(num[i]-'0');
            }
            
            num=to_string(sum);
        }

        
        return stoi(num);
    }
};