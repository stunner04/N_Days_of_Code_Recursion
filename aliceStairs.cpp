#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
typedef long long ll;

int countMinWays(ll n, ll m)
{
    if (n < 0) // underground
    {
        return 0;
    }
    if (n == 1) // on groundlevel = 0
    {
        return 1;
    }
    return ((countMinWays(n - 1,1) % mod + countMinWays(n - m,m) % mod) % mod);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m;
    cin >> n >> m;
    cout << countMinWays(n, m);

    return 0;
}