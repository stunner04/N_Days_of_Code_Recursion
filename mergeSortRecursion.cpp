#include <bits/stdc++.h>
using namespace std;

void mergeSortedArrays(vector<int> &v, int s, int e)
// vector => s=3,5,m=6,0,1,e=2
{
    int mid = s + (e - s) / 2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int> first(len1);
    vector<int> second(len2);

    copy_n(&v[s], len1, begin(first));

    // for (int i = 0; i < len1; i++)
    // {
    //     first[i] = v[s + i]; // start of vector + i for iterting further
    // }
    copy_n(&v[mid + 1], len2, begin(second));

    // for (int i = 0; i < len2; i++)
    // {
    //     second[i] = v[mid + 1 + i]; // mid+1 of vector + i for iterting further
    // }


    // now merge in the sorted way

    int i = 0, j = 0;

    while (i < len1 && j < len2)
    {
        if (first[i] <= second[j])
        {
            v.push_back(first[i++]);
        }
        else
        {
            v.push_back(second[j++]);
        }
    }

    while (i < len1)
    {
        v.push_back(first[i++]);
    }

    while (j < len2)
    {
        v.push_back(first[j++]);
    }
}

void mergeSort(vector<int> &v, int s, int e)
// vector => s=5,3,6,1,2,e=0
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);
    mergeSortedArrays(v, s, e);
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
    int s = 0, e = n - 1;

    mergeSort(v, s, e);

    cout << "After sorting: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}

// T(n) = 2T(n/2) + θ(n) 
// for largeDATA sets , stable , not inplace 
// Custom sorting: Merge sort can be adapted to handle different input distributions, 
//such as partially sorted, nearly sorted, or completely unsorted data.