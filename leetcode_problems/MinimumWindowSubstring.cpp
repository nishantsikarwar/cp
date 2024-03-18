class Solution {
public:
    string minWindow(string s, string t) {
        
        if (t.empty() || s.empty()) {
        return "";
    }

    std::unordered_map<char, int> t_count;
    for (char c : t) {
        t_count[c]++;
    }

    int required = t_count.size();
    int formed = 0;
    std::unordered_map<char, int> window_count;

    int left = 0, right = 0;
    int min_len = INT_MAX, min_left = 0;

    while (right < s.length()) {
        char c = s[right];
        window_count[c]++;

        if (t_count.count(c) && window_count[c] == t_count[c]) {
            formed++;
        }

        while (left <= right && formed == required) {
            c = s[left];

            if (right - left + 1 < min_len) {
                min_len = right - left + 1;
                min_left = left;
            }

            window_count[c]--;
            if (t_count.count(c) && window_count[c] < t_count[c]) {
                formed--;
            }

            left++;
        }

        right++;
    }

    return min_len == INT_MAX ? "" : s.substr(min_left, min_len);
    }
};