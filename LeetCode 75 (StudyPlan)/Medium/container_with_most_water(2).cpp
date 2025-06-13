class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxarea=0;
      int left=0;
      int right=height.size()-1;
     while (left<right)
     {
        int area=min(height[left],height[right])*(right-left);
        maxarea=max(maxarea,area);
        if (height[left]<height[right])    
        left++;
        else
        right--;
      }
      return maxarea;
    }
};

/* This solution is the final one, works for all test cases.

Time Complexity: O(n)
Space Complexity: O(1)       ->use only few extra varaibles like maxarea,left,right etc ; no dynamic ones

Explanation:
Two pointer problem so we use a left and right pointer.
->left initialize with 0 and right with last index.
-> we are updating area by calculating like this 
Array: [1,8,6,2,5,4,8,3,7]     area with 1 and 8 (length=1, breath=1)  
                                          area with 1 and 6 (length=1, breath= 2)  
->length is minimum of the two elements and breath is the number of element between them (starts with 1)
->update maxarea
*/
