#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int factorial(int n)
{
    //cout << n << "\n";
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int powerOfTwo(int n)
{
    if(n==0)
    {
        return 1;
    }

    return 2*powerOfTwo(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n)<<"\n";
    cout << powerOfTwo(n);

    return 0;
}