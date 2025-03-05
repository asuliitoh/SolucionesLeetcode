//https://leetcode.com/problems/find-the-difference/description/
#include<string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int resultado = 0;
        int n = t.length();
        for (int i = 0; i < n; i++){
            if (i == n-1) resultado+= (int)t[i];
            else resultado+= (int)t[i] - (int)s[i];
        }
        return (char)resultado;
    }
};