class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxarea=0;
      for (int i=0;i<height.size();i++)
      {
        for (int j=i+1;j<height.size();j++)
        {
        int length=min(height[i],height[j]);
        int breath=j-i;
        int area=length*breath;
        if (maxarea<area)
        maxarea=area;
        }     
      }
      return maxarea;
    }
};

//NOTE: this only passes 58/ 65 test cases, time limit exceeded.
