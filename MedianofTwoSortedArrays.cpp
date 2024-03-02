#include <vector>
namespace std
{
    class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int m = nums1.size();
            int n = nums2.size();
            if (m > n) {
                swap(nums1, nums2);
                swap(m, n);
            }
            int imin = 0;
            int imax = m;
            int half_len = (m + n + 1) / 2;
            while (imin <= imax) {
                int i = (imin + imax) / 2;
                int j = half_len - i;



            int position = 0;
            int a, b;
            vector<int>twonums;
            if (len % 2 != 0)
            {
                position = len / 2 + 1;
            }
            else position = len / 2;

            for (int i = 0; i < position+1; i++)
            {   a = nums1[i];
                b = nums2[i]
                if (a)
                {
                    /* code */
                }
                
            }
            
        }
    };
}