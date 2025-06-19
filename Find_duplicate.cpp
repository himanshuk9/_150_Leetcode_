#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>
using namespace std;

void findduplicate(vector<int> arr)
{

    set<int> duplicate;
    unordered_set<int> seen;

    for (int x : arr)
    {
        if (seen.count(x))
        {
            duplicate.insert(x);
        }
        else
        {
            seen.insert(x);
        }
    }
    cout << " duplicate element : .... ";
    for (int x : duplicate)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {2, 4, 3, 5, 4, 4, 6, 5};
    findduplicate(arr);
}