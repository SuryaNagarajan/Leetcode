class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        
        map<char, vector<int>>mp{};
        
		// Initialize the map for each char in alphabet
        for(int i{}; i<26; ++i){
            vector<int>v{};
            mp[(char)i + 'a'] = v;
        }
        
        for(auto &word:words){
            int mask{};
            
			// generate mask for each word
            for(auto &letter: word){
                int bit = letter - 'a';
                mask = mask | (1<<bit);
            }
            
			//This is a checker that will help us NOT to incluce same word twice in our map for some character
            vector<bool>letter_found(26, 0);
            
            for(auto &letter: word){
                
                if(letter_found[letter - 'a'] == 0){
                    mp[letter].push_back(mask);
                    letter_found[letter - 'a'] = 1;
                }
            }
        }
        
        vector<int>res{};
        
        for(auto &puzzle: puzzles){
            
            char first_char = puzzle[0];
            int cnt{};
            int puzzle_mask{};
            
			// Generate puzzle mask
            for(auto &letter: puzzle){
                int bit = letter - 'a';
                puzzle_mask = puzzle_mask | (1<<bit);
            }
            
			//Get our desired vector of bitmask that contains our first char
            for(auto word_mask: mp[first_char]){
			
				//check if all letter is contained by puzzle or not
                if((word_mask & puzzle_mask) == word_mask)
                    cnt++;
            }
            // Add the count for current puzzle
            res.push_back(cnt);
        }
        
        return res;
    }
};