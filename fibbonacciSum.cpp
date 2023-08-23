#include <bits/stdc++.h>
const int mod = 1e9 + 7;

// int fibNum(int x)
// {

// 	if(x==0)
// 	{
// 		return 0;
// 	}
// 	if(x==1)
// 	{
// 		return 1;
// 	}
// 	return ((fibNum(x-1)%mod)+(fibNum(x-2)%mod))%mod;
// }

int fiboSum(int n, int m)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int sum = 0;

    vector<int> fibNum(m + 1);
    fibNum[0] = 0;
    fibNum[1] = 1;

    for (int i = 2; i <= m; i++)
    {
        fibNum[i] = (fibNum[i - 1] + fibNum[i - 2]) % mod;
    }

    for (int i = n; i <= m; i++)
    {
        sum = (sum + fibNum[i]) % mod;
    }
    return sum;
}