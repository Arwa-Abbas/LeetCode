class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_set <int> set1(nums1.begin(),nums1.end());
       unordered_set <int> set2(nums2.begin(),nums2.end());
       vector <int> output1,output2;
       for (int i: set1)
       {
        if (set2.count(i)==0)
        output1.push_back(i);
       }
       for (int i: set2)
       {
        if (set1.count(i)==0)
        output2.push_back(i);
       }
       return {output1,output2};
    }
};

/* Time Complexity: O(n+m)
Space Complexity: O(n+m)
*/
