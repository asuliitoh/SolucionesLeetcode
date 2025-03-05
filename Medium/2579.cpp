//https://leetcode.com/problems/count-total-number-of-colored-cells/description/
using namespace std;

class Solution {
public:
    long long coloredCells(int n) {
        long long resultado = 1;
        for (int i=2; i <= n ; i++) resultado+= 4*(i-1);
        return resultado;      
    }
};
