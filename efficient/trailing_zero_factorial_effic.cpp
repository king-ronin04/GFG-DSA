#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int res = 0;
    for (int i = 5; i <= num; i *= 5)
    {
        res = res + (num / i);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << factorial(num);
        cout << "\n";
    }
    return 0;
}