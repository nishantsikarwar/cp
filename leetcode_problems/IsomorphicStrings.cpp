#include <unordered_map>
class Solution {
public:
    #include <string>

    bool isIsomorphic(string s, string t) {
 

                if(s.size() != t.size()) {
                    return false;
                }
                std::unordered_map<char, int> sToMap;
                std::unordered_map<char, int> tToMap;

       for(int i = 0 ; i < s.length(); i++) {
        char sChar = s[i];
        char tChar = t[i];

        // Check for s to t mapping
        if(sToMap.find(sChar) != sToMap.end()) {
            if(sToMap[sChar] != tChar) {
                return false;
            }
        } else {
            sToMap[sChar] = tChar;
        }

         // Check for t to s mapping
        if(tToMap.find(tChar)!= tToMap.end()) {
            if(tToMap[tChar] !=  sChar) {
                return false;
            }
        }else {
            tToMap[tChar] = sChar;
        }

       }
    
        return true;
    }
};