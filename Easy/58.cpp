//https://leetcode.com/problems/length-of-last-word/description/
#include<cwctype>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
    int resultado = 0;
    for (int i = 1 ; i <= int(s.length()); i++){
        if (iswalnum(s[i-1])) {resultado++;}
        else if ((s[i-1] == ' ') && (iswalnum(s[i]))) resultado=0;

    }
    return resultado;
    }
};