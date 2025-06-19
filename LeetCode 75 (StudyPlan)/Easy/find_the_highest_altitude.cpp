class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest_altitude=0,altitude=0;
        for (int i=0;i<gain.size();i++)
        {
            int net=altitude+gain[i];
            highest_altitude=max(net,highest_altitude);
            altitude=net;
        }
        return highest_altitude;
    }
};

/* Time Complexity: O(N)
Space Complexity: O(1)
*/
