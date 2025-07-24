//https://leetcode.com/problems/valid-anagram/description/
#include <iostream>
using namespace std;

class Solution {
public:

    bool isAnagram(string s, string t) {
        int sValues[26];
        int tValues[26];
        if (s.length() != t.length()) return false;
        
        for (int i = 0; i < s.length(); i++){
            sValues[(int)s[i] - 97]++;
            tValues[(int)t[i] - 97]++;
        }

        for (int i = 0; i < 26; i++) {
            if (sValues[i] != tValues[i]) return false;
        }
        return true;
    }
};