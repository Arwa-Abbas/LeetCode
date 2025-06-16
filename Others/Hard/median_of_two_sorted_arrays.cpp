class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector <int> mergedarray(n);
     for (int i=0;i<nums1.size();i++)  
     {
        mergedarray[i]=nums1[i];
     }
     for (int i=nums1.size();i<n;i++)
     {
        mergedarray[i]=nums2[i-nums1.size()];
     }
     sort(mergedarray.begin(),mergedarray.end());
     double median;
     if (n%2==0)
    median=(double)(mergedarray[(n-1)/2]+mergedarray[n/2])/2;
     else
     median=(double)mergedarray[(n-1)/2];
     return median;
    }
};


//Time Complexity= Olog(n+m)
//Space Complexity=O(n+m)
