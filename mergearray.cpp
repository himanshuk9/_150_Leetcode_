#include <iostream>
using namespace std;
#include <vector>

void mergea(vector<int> nums1, vector<int> nums2, int m, int n)
{
    vector<int> ans(m + n);
    int k = 0, i = 0, j = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            ans[k++] = nums1[i++];
        }
        else
        {
            ans[k++] = nums2[j++];
        }
    }
    while (j < n)
    {
        ans[k++] = nums2[j++];
    }
    while (i < m)
    {
        ans[k++] = nums2[i++];
    }

    cout << " merge array" << endl;
    for (int x : ans)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {5, 6, 7, 8};
    int m = nums1.size();
    int n = nums2.size();
    mergea(nums1, nums2, m, n);
}

.....................................................................................................................................................................................................................................................................................................................................
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
