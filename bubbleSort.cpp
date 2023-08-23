#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> v, int n)
{
    if (n == 0 || n == 1)
    {
        return v;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
            swap(v[i], v[i + 1]);
    }

    return bubbleSort(v, n - 1);
}

int main()
{

    vector<int> v{5, 4, 6, 1, 2};
    cout << "Before sorting: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    int n = v.size();
    v = bubbleSort(v, n);
    cout << "After sorting: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}