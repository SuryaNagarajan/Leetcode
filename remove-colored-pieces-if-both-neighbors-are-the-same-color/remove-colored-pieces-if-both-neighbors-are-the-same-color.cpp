class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<3) return false;
        int A=0,B=0;
                
        for(int i=2;i<colors.size();i++){
            
            if(colors[i-2]==colors[i-1] && colors[i-1]==colors[i] && colors[i]=='A') 
                A++;
            else if(colors[i-2]==colors[i-1] && colors[i-1]==colors[i] && colors[i]=='B') 
                B++;
        }
        
        return A>B;
    }
};

