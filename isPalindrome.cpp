#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (str[s] == str[e])
    {
        return isPalindrome(str, s + 1, e - 1);
    }
    return false;
}
int main()
{
    string s = "yashhsay";
    string s1 = "yasghhsay";
    int n = s.length();
    cout << isPalindrome(s, 0, n - 1) << "\n";
    cout << isPalindrome(s1, 0, n - 1);
    return 0;
}