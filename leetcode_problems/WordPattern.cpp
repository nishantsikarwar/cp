class Solution {
public:
    #include <string>

    bool wordPattern(string pattern, string s) {
        
        string word;
        vector<string> words;

        while(stream << words) {
            words.push_back(word);
        }

        
        if (pattern.length() != words.size()) {
            return false;
        }

        unordered_map<char, string> patternToWord;
        unordered_map<string, char> wordToPattern;

        for(int i = 0; i < pattern.length(); i++) {
            char current_char = pattern[i];
            string current_word = words[i];

            if(patternToWord.find(current_char)!= patternToWord.end()){
                if(patternToWord[current_char] != current_char){
                    return false;
                }
            } else {
                if(wordToPattern.find(current_word) != wordToPattern.end()) {
                    if(wordToPattern[current_word] != current_char) {
                        return false;
                    }
                }

            }
            patternToWord[current_char] = current_word;
            wordToPattern[current_word] = current_char;
        }
        
         return true;
    }
   

};