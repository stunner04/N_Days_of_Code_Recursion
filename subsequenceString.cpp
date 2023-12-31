#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

void solve(string str, int index, string output, vector<string> &ans)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    solve(str, index + 1, output, ans);

    char toBePushedCharacter = str[index];
    output.push_back(toBePushedCharacter);
    solve(str, index + 1, output, ans);
}
vector<string> subsequences(string str)
{

    vector<string> ans;
    string output = "";
    int i = 0;
    solve(str, i, output, ans);
    return ans;
}

int main()
{
    return 0;
}