class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int steps=0;
        while(startValue < target){
            target= target%2==1?target+1:target/2;
            steps++;
        }
        
        return steps + startValue-target;
    }
};