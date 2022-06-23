#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 and b % res == 0)
            break;
        res--;
    }
    return res; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << hcf(a, b);
    }
    return 0;
}