#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int res = max(a, b);
    while (1)
    {
        if (res % a == 0 and res % b == 0)
            break;
        res++;
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
        cout << lcm(a, b) << "\n";
    }
    return 0;
}