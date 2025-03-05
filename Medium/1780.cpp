//https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/
#include<cmath>
using namespace std;
class Solution {
public:
  int log3(int n)
{
    int exp = 0;
    while (n > 1) {
        n /= 3;
        exp++;
    }
    return exp;
}

    bool checkPowersOfThree(int n) {
        
        int exp = -1;
        int aux = -1 ;
        while (true) { 
            if (n==0) return true;
            aux = log3(n);
            if (exp == aux) return false;
            else exp = aux;
            n = n - pow(3, exp);
            if (n!=0 && exp==0) return false;

        }
    
    }
};