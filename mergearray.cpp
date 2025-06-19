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