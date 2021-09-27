class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        if(k<2) return k;
        vector<unsigned long long> fib={1,1};
        
        for(int i=2;fib[i-1]+fib[i-2]<=k;i++){
            fib.push_back(fib[i-1]+fib[i-2]);
        }
        
        int count=0;
        while (k > 0) {
            
            if (fib.back() > k) {
                fib.pop_back();
                continue;
            }
            
            ++count;
            
            k -= fib.back();
            fib.pop_back();
        }
        
        
        return count;
    }
};