class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int output=0;
        int left=0;
        int right=nums.size()-1;
        while (left<right)
        {
            int sum=nums[left]+nums[right];
            if (sum==k)
            {
                output++;
                left++;
                right--;
            }
            else if (sum<k)
            left++;
            else
            right--;
        }
        return output;
    }
};

//NOTE: only passes 12 test cases 
