class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> merged;
        int k=0,j=0;
        while(k!=nums1.size() || j!=nums2.size())
        {   
            if(j==nums2.size())
            {
                merged.push_back(nums1[k]);
                k++;
            }
            else if(k==nums1.size())
            {
                merged.push_back(nums2[j]);
                j++;
            }
            else if(nums1[k]<nums2[j])
            {
                merged.push_back(nums1[k]);
                k++;
            }
            else
            {
               merged.push_back(nums2[j]);
                j++;
            }
        }
        int h=merged.size();
        cout << h;
        if(merged.size()%2==0)
            return  ((double)(merged[h/2]+merged[h/2-1])/2);
        else
            return merged[h/2];
    }
};