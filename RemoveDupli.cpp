#include <iostream>
#include <vector>
using namespace std;

int removeduplicates(vector<int> &arr)
{
    if (arr.empty())
    {
        return 0;
    }

    int count = arr.size();
    int index = 1; // since arr[0] is already unique themn start with 1
    for (int i = 1; i < count; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 5};
    int newlength = removeduplicates(arr);
    cout << newlength;
}