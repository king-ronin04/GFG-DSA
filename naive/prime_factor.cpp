#include <iostream>
using namespace std;

class study
{
public:
    int prime(int n)
    {
        if (n == 1)
            return false;

        if (n == 2 || n == 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    void prime_fact(int num)
    {
        for (int i = 2; i < num; i++)
        {
            if (prime(i))
            {
                int x = i;
                while (num % x == 0)
                {
                    cout << i<<" ";
                    x = x * i;
                }
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        study ob;
        ob.prime_fact(num);
        cout << "\n";
    }
    return 0;
}