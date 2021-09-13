class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string str="balloon";
        int count=INT_MAX;
        map<char,int> m;
        
        for(auto c:text) m[c]++;
        
        return min(m['b'],min(m['a'],min((m['l']/2),min((m['o']/2),m['n']))));
    }
};