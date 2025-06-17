class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int maxcandies=0;
        for (int candy : candies)
         {
            if (candy > maxcandies) 
                maxcandies=candy;
        }
    vector <bool> output(candies.size());
      for (int i=0; i<candies.size(); i++)
      {
        if (candies[i]+extraCandies >= maxcandies)
        output[i]=true;
        else
        output[i]=false;
      }
      return output;
    }
};

/* Explanation:
Find the maximum number of candies among all the kids by iterating through the candies array.
Iterate through the candies array again and check for each kid if they can have the greatest number 
of candies by adding extracandies to their candies and comparing it to the maximum number of candies.
If it is greater than or equal to the maximum number of candies, add true to the result list, 
else add false to the result list.

Time Complexity: O(n)
Space Complexity: O(n)
*/
