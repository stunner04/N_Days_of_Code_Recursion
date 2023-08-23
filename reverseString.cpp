#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str, int s, int e)
{

    if (s > e)
    {
        return str;
    }
    swap(str[s], str[e]);
    return reverseString(str, s + 1, e - 1);
}


int main()
{
    string s = "yash";
    int n = s.length();
    cout << reverseString(s, 0,n-1);
    return 0;
}

/*

#include <bits/stdc++.h>

string reverseString(string &str, int s, int e)
{

    if (s > e)
    {
        return str;
    }
    swap(str[s], str[e]);
    return reverseString(str, s + 1, e - 1);
}

string reverseString(string str)
{
    int n = str.length();
    return reverseString(str, 0, n - 1);
}
*/