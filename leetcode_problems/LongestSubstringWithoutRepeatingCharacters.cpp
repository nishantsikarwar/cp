class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int maxLen = 0;
        int start = 0;

        for(int i = 0; i < s.size(); i++) {
            char currentChar = s[i];

            if(charMap.find(currentChar)!= charMap.end() && charMap[currentChar] >= start) {
                start = charMap[currentChar] + 1;
            }
            charMap[currentChar] = i;
            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;

        
    }
};