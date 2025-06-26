class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int output=0;
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                bool check=true;
                for (int k=0;k<cols;k++)
                {
                if (grid[i][k]!=grid[k][j]) {
                check=false;
                break;  }
                }
                if (check==true)
                output++;
            }
        }
        return output;
    }
};

/* Time Complexity: O(n^3)
  Space Complexity: O(1)
*/
