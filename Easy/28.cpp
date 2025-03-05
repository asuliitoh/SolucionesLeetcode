//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
#include<string>
using namespace std;

class Solution {
public:
   
   int strStr(string haystack, string needle) {
  
    bool condicion = false;
    int i = 0;
    int j = 0;
    while ((i < (int)haystack.length() && (!condicion))){
        
        if (needle[j] == haystack[i]) j++;
        else if (j!=0) {
            i = i - j;
            j=0;
        }
        if (j == (int)needle.length()) condicion = true;
        i++;

        
   }

   if (condicion) return i - needle.length();
   else return -1;

}
    
};