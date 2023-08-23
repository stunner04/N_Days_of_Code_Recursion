#include <bits/stdc++.h>
using namespace std;

int hoaresPartition(vector<int> &arr, int s, int e)
{
    int p = arr[s];
    int i = s - 1;
    int j = e + 1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < p);
        do
        {
            j--;
        } while (arr[j] > p);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}


void quickSort(vector<int> &v, int s, int e)
{
    if (s < e)
    {
        int pivot = hoaresPartition(v, s, e);
        quickSort(v, s, pivot);
        quickSort(v, pivot + 1, e);
    }
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

    quickSort(v, s, e);

    cout << "After sorting: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}

/* 

Best case T(n) = T(n/2) + theta(n)  -> equally divided
Worst case T(n) = T(n-1) + theta(n)  -> 1 element left tree n-1 element in right tree division
Average case = O(nlog(n)) -> unfair division ex- 10 element in left tree and 90 element in right tree

-> If we randomly pick the element as pivot then TC is nLog(n).

-> QuickSort is an unstable algorithm because we do swapping of elements 
according to pivot’s position (without considering their original positions).

-> it qualifies as an in-place sorting algorithm as it 
uses extra space only for storing recursive function calls but not for manipulating the input. 

https://www.geeksforgeeks.org/application-and-uses-of-quicksort/?ref=lbp
https://www.geeksforgeeks.org/some-frequently-asked-questions-faqs-about-quick-sort/?ref=lbp
*/