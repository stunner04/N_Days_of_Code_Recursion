#include <bits/stdc++.h>
using namespace std;

int calSum(int *arr, int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    return arr[0] + calSum(arr + 1, n - 1);
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << calSum(arr, 5);
    return 0;
}