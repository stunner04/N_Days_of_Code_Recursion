#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(vector<int> nums, int index, vector<int> output, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        solve(nums, index + 1, output, ans);

        int toBePushedElement = nums[index];
        output.push_back(toBePushedElement);
        solve(nums, index + 1, output, ans);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<vector<int>> ans;
        vector<int> outputStore;
        int i = 0;
        solve(nums, i, outputStore, ans);
        return ans;
    }
};

int main()
{
    return 0;
}