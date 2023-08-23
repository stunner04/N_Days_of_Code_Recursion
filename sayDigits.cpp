#include <bits/stdc++.h>
using namespace std;


void sayDigit2(int num)
{
    vector<string> numbers{"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    if (num <= 0)
        return;

    int lastDigit = num % 10;
    num /= 10;
    sayDigit2(num);
    cout << numbers[lastDigit] << " ";
}

int main()
{
    int n = 567;
    sayDigit2(n);
    return 0;
}