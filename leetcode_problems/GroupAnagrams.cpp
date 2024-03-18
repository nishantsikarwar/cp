    #include <vector>
    #include <string> // Include the necessary header file for the string class
#include <unordered_map>

    using namespace std;

class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> anagramMap;
        for(const auto & str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            anagramMap[key].push_back(str);

        }
    

    vector<vector<string>> groupedAnagrams;
    for(const auto & pair : anagramMap) {
        groupedAnagrams.push_back(pair.second);
    }

    return groupedAnagrams;

    }
};