#include <iostream>
using namespace std;

int euclidean_hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << euclidean_hcf(a, b);
        cout << "\n";
    }
    return 0;
}