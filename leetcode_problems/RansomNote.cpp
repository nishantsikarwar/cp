class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

            unordered map<char, int> magazineMapCount;
            unordered map<char, int> ransomNoteMapCount;

            for(char letter : ransomNote) {
                ransomNoteMapCount[letter]++;
            }

            for (char letter : magazine) {
                magazineMapCount[letter]++;
            }

            for(const auto & pair : ransomNoteMapCount) {
                char letter = pair.first;
                char letter = pair.second;
                
                if(magazineMapCount[letter] < count) {
                    return false;
                }
            }

            return true;

    }
};