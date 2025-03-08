//https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/
#include<string>
#define MAX 100000
using namespace std;
class Solution {
public:

    int minimumRecolors(string blocks, int k) {
        int min = MAX;
        for (int i=0; i+k-1 < (int)blocks.length(); i++){
            int j = i;
            int white = 0;
            while (j < i+k){
                if (blocks[j]=='W') white++;
                j++;
            }
            if (min > white) min = white;
        }
        return min;
    }
};

