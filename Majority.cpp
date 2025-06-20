#include <iostream>
#include <vector>

using namespace std;

int majority(vector<int> arr)
{
    int s = arr.size();
    for (int i = 0; i < s; i++)
    {
        int count = 0;

        for (int j = 0; j < s; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > s / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout << majority(arr);
}