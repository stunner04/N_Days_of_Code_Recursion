#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v, int size)
{
    int n = v.size();

    if (n == 0 || n == 1)
    {
        return true;
    }

    if (v[0] > v[1])
    {
        return false;
    }
    else
    {
        return isSorted(v.begin+ 1, n - 1);

    }
}
int main()
{

    vector<int> v{2, 3, 4, 5, 6};
    int n = v.size();
    cout << isSorted(v, n);

    return 0;
}