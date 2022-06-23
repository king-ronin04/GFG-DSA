#include <bits/stdc++.h>
using namespace std;

string isPrime(int num)
{
    if (num == 1)
        return "NO";
    if (num == 2 || num == 3)
        return "YES";
    if (num % 2 == 0 || num % 3 == 0)
        return "NO";
    for (int i = 5; i * i < num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return "NO";
    }
    return "YES";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        cout << isPrime(num);
        cout << "\n";
    }
    return 0;
}