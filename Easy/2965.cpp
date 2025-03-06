
//https://leetcode.com/problems/find-missing-and-repeated-values/description/
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> appareances(grid.size() * grid.size(), 0);
        vector<int> ans(2, -1);
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid.size(); j++){
                appareances[grid[i][j] - 1]++;
            }
        }
        
        for (int i = 0; (ans[0]==-1 || ans[1]==-1); i++){
            if (appareances[i]>1) ans[0] = i+1;
            if (appareances[i]==0) ans[1] = i+1;
        }
        
        return ans;
    }
};
