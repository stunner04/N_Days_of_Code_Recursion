#include <bits/stdc++.h>
using namespace std;

void sourceDestintion(int src, int dest)
{

    cout << "Source " << src << " Destination " << dest << "\n";
    if (src == dest)
    {
        return;
    }
    src++;
    sourceDestintion(src, dest);
}
int main()
{
    int src = 1;
    int dest = 10;
    sourceDestintion(src, dest);
    return 0;
}

