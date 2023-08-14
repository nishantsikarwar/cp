class Solution {
public:
    bool isAnagram(string s, string t) {
        
   if (s.length() != t.length()) {
        return false; // Anagrams must have the same length
    }

    std::unordered_map<char, int> charFrequency;

    // Count character frequencies in string s
    for (char c : s) {
        charFrequency[c]++;
    }

    // Decrease character frequencies using string t
    for (char c : t) {
        if (charFrequency.find(c) == charFrequency.end() || charFrequency[c] == 0) {
            return false; // Character not found in s or frequency exhausted
        }
        charFrequency[c]--;
    }

    // All character frequencies should be zero for anagrams
    for (const auto& pair : charFrequency) {
        if (pair.second != 0) {
            return false;
        }
    }

    return true;
}

};