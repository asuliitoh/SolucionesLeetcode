//https://leetcode.com/problems/repeated-substring-pattern/description
#include <iostream>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string m = "";
        int j = 0;
        bool condition = false;
        for (int i = 0; i <= s.length()/2; i++) {
            m += s[i];
            j = i+1;
            
            while (j < s.length()){
                condition = true;
                if (m != s.substr(j, i+1)) {
                    condition = false;
                    break;
                } 

                j+=i+1;
            }
            if (condition) return true;
        }
        return condition;
    }
};