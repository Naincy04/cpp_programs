class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.size();
    unordered_map<char, int> s_indices, t_indices;

    
    for (int i = 0; i < n; ++i) {
        s_indices[s[i]] = i;
        t_indices[t[i]] = i;
    }

    int diff = 0;

    
    for (char c = 'a'; c <= 'z'; ++c) {
        if (s_indices.find(c) != s_indices.end() && t_indices.find(c) != t_indices.end()) {
            diff += abs(s_indices[c] - t_indices[c]);
        }
    }

    return diff;

    }
};