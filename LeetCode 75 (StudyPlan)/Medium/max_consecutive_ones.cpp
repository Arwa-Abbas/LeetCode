class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        for (int right = 0; right < nums.size(); right++) 
        {
            if (nums[right] == 0) 
                k--;
            if (k < 0) 
            {
                if (nums[left] == 0) 
                    k++;
                left++;
            }
        }
         return nums.size() - left;        
    }
};


/*Explanation: 
Refer to this video: https://www.youtube.com/watch?v=Dvrxk5JPs3g&t=2s
Time Complexity: O(n)
Space Complexity: O(1)
*/
