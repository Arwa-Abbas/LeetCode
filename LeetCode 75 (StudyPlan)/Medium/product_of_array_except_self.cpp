class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {  //0(n) logic
      int size=nums.size();
      vector <int> answer(size,0);
      int prefix=1,suffix=1;
      for (int i=0;i<size;i++)
      {
        answer[i]=prefix;
        prefix*=nums[i];
      }
      for (int i=size-1;i>=0;i--)
      {
        answer[i]*=suffix;
        suffix*=nums[i];
      }
      return answer;
    }
};

/* Explanation:
In this problem, it says to solve with O(n) logic
we can easily do this problem with O(n2) by using two loops one for answer and one for nums but it wont pass all cases and time limit will exceeded. 
By O(n) logic we can do prefix and suffix logic using two loop seperately one for prefix one for suffix.
It works like this: 
Input = [1,2,3,4]
Prefix = [1, 1, 2, 6]    -> remember prefix value default is 1, it calculates product before nums[i] 
Suffix =[24, 12, 4, 1] -> suffix default value is 1, hypothetically it works like this but in suffix loop we directly 
calculating product of answer[i] so it gives us final answer
Answer = [24, 12, 8, 6]  ->mutliples prefix and suffix

Time Complexity: O(n)
Space Complexity: O(1)
*/
