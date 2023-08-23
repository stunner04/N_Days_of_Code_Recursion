#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    bool isMovable(int x, int y, vector<vector<int>> m, int n, vector<vector<int>> visited)
    {
        if (x >= 0 && x <= n || y >= 0 && y <= n && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void solve(vector<vector<int>> m, int n, vector<string> &ans,
               vector<vector<int>> &visited, int sourceX, int sourceY, string path)
    {

        if (sourceX == n - 1 && sourceY == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[sourceX][sourceY] == 1;

        // for UP
        int X = sourceX - 1, Y = sourceY;
        if (isMovable(X, Y, m, n, visited))
        {
            path.push_back('U');
            solve(m, n, ans, visited, X, Y, path);
            path.pop_back();
        }

        // for DOWN
        X = sourceX + 1, Y = sourceY;
        if (isMovable(X, Y, m, n, visited))
        {
            path.push_back('D');
            solve(m, n, ans, visited, X, Y, path);
            path.pop_back();
        }

        // for RIGHT
        X = sourceX, Y = sourceY + 1;
        if (isMovable(X, Y, m, n, visited))
        {
            path.push_back('R');
            solve(m, n, ans, visited, X, Y, path);
            path.pop_back();
        }

        // for LEFT
        X = sourceX, Y = sourceY - 1;
        if (isMovable(X, Y, m, n, visited))
        {
            path.push_back('L');
            solve(m, n, ans, visited, X, Y, path);
            path.pop_back();
        }
        visited[sourceX][sourceY] == 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {

        vector<string> ans;
        if (m[0][0] == 0)
            return ans;
        string path_UDLR = "";

        int sourceX = 0, sourceY = 0;

        vector<vector<int>> visited = m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        solve(m, n, ans, visited, sourceX, sourceY, path_UDLR);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    return 0;
}