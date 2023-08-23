#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    if (s > e)
    {
        return false;
    }
    int mid = (s + e) / 2;

    if (arr[mid] == k)
    {
        return true;
    }
    else if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 0, 4, 5) << " "
         << "\n";
    cout << binarySearch(arr, 0, 4, 6) << " "
         << "\n";
    return 0;
}


/*
int binarySearch(vector<int> &nums, int s, int e, int k)
{

    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;

    if (nums[mid] == k)
    {
        return mid;
    }
    else if (nums[mid] < k)
    {
        return binarySearch(nums, mid + 1, e, k);
    }
    else
    {
        return binarySearch(nums, s, mid - 1, k);
    }
}

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    return binarySearch(nums, 0, n, target);
}
*/