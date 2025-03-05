//https://leetcode.com/problems/merge-strings-alternately/description/
#include <string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
    int l1 = word1.length();
    int l2 = word2.length();
    int i = 0;
    int j = 0;
    string result = "";
    while ((i != l1) && (j != l2)){
        
        if (((i+j)%2==0)) {
            result.push_back(word1[i]);
            i++;
        }
        else{
             result.push_back(word2[j]);
            j++;
        }

    }

    if (i == l1) result.append(word2.substr(j, l2));
    else if  (j == l2) result.append(word1.substr(i, l1));
    return result;
    }
};