class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n==0)
        return true;
        for (int i=0;i<flowerbed.size();i++)
        {
            if (flowerbed[i]==0)
            {
                int left=(i==0) ?0:flowerbed[i - 1];
                int right=(i==flowerbed.size() - 1)?0:flowerbed[i + 1];
                if (left == 0 && right == 0)
                 {
                    flowerbed[i]=1;
                    n--;
                    if (n==0) 
                    return true;
                 }
            }
        }
        return false;
    }
};

/* Time complexity: O(n)
Space compleixty: O(1)
*/
