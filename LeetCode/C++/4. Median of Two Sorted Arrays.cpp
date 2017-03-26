///LeetCode 4. Median of Two Sorted Arrays by C++
///write by LazyWolfLin in 16.09.13

class Solution
{
    double findTheKthNumber(vector<int> &Array1,int Begin1,vector<int> &Array2,int Begin2,int K)
    {
        //if Array1 large then Array2, swap them.
        if ((Array1.size()-Begin1)>(Array2.size()-Begin2)) return findTheKthNumber(Array2,Begin2,Array1,Begin1,K);
        //if Array1 is empty, return Array2[Begin2+K-1];
        if (Array1.size()-Begin1==0) return Array2[Begin2+K-1];
        //if K equal to 1.
        if (K==1) return min(Array1[Begin1],Array2[Begin2]);

        int cnt=min(K/2,int(Array1.size())-Begin1);
        if (Array1[Begin1+cnt-1]<Array2[Begin2+K-cnt-1]) return findTheKthNumber(Array1,Begin1+cnt,Array2,Begin2,K-cnt);
        else return findTheKthNumber(Array1,Begin1,Array2,Begin2+K-cnt,cnt);
    }
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        double ans;
        int cnt=nums1.size()+nums2.size();
        if (cnt%2==1) ans=findTheKthNumber(nums1,0,nums2,0,cnt/2+1);
        else ans=(findTheKthNumber(nums1,0,nums2,0,cnt/2)+findTheKthNumber(nums1,0,nums2,0,cnt/2+1))/2.0f;
        return ans;
    }
};
