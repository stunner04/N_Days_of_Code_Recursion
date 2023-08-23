#include <bits/stdc++.h>
int mod = 1e9 + 7;
int countDistinctWays(int n)
{

    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }

    if (n == 2)
    {
        return 2;
    }

    return (countDistinctWays(n - 1) % mod + countDistinctWays(n - 2) % mod) % mod;
}
int main()
{
    int n;
    cin >> n;
    cout << countDistinctWays(n);

    return 0;
}