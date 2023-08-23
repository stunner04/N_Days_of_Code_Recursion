#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(string digits, int index, string mapping[], string output, vector<string> &ans)
    {

        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        int digitNum = digits[index] - '0';      // getting the number
        string mappedString = mapping[digitNum]; // getting the string mapped to the digitNum

        for (int i = 0; i < mappedString.length(); i++)
        {
            output.push_back(mappedString[i]); // pushing the character of mapped string [i]
            solve(digits, index + 1, mapping, output, ans);
            output.pop_back(); // pop back the last element because of wrong answer
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() <= 0)
        {
            return ans;
        }
        string output = "";
        int i = 0;
        string mapper[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, i, mapper, output, ans);
        return ans;
    }
};

int main()
{
    return 0;
}