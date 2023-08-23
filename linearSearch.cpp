#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == x)
    {
        return arr[0];
    }

    else
    {
        return linearSearch(arr + 1, n - 1, x);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << linearSearch(arr, 5, 6) << " "
         << "\n";
    cout << linearSearch(arr, 5, 4) << "\n";
    return 0;
}