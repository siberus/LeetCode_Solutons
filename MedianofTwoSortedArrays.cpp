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
                if (i < m && nums2[j - 1] > nums1[i]) {
                    imin = i + 1;
                } 
                else if (i > 0 && nums1[i - 1] > nums2[j]) {
                    imax = i - 1;
                } 
                else {
                    int lmax = 0;
                    // вычисляем левую часть медианы
                    if (i == 0) {
                        lmax = nums2[j - 1];
                    } else if (j == 0) {
                        lmax = nums1[i - 1];
                    } else {
                        lmax = max(nums1[i - 1], nums2[j - 1]);
                    }
                    // если сумма размеров массивов нечетная, возвращаем lmax
                    if ((m + n) % 2 == 1) {
                        return lmax;
                    }
                    int rmin = 0;
                    // вычисляем правую часть медианы
                    if (i == m) {
                        rmin = nums2[j];
                    } else if (j == n) {
                        rmin = nums1[i];
                    } else {
                        rmin = min(nums1[i], nums2[j]);
                    }
                    // если сумма размеров массивов четная, возвращаем среднее значение
                    return (lmax + rmin) / 2.0;
                }
            }
            // если массивы не пересекаются, возвращаем 0.0
            return 0.0;    
        }
        
    };
}