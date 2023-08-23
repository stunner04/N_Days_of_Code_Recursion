#include <bits/stdc++.h>
using namespace std;

void printCountTailRecursion(int n)
{
    if (n == 1)
    {
        cout << "1 "
             << "\n";
        return;
    }
    cout << n << "\n";
    printCountTailRecursion(n - 1);
}

void printCountHeadRecursion(int n)
{
    if (n == 1)
    {
        cout << "1 "
             << "\n";
        return;
    }
    printCountHeadRecursion(n - 1);
    cout << n << "\n";
}

int main()
{
    int n;
    cin >> n;

    printCountTailRecursion(n);
    cout << "\n";
    printCountHeadRecursion(n);
    return 0;
}

