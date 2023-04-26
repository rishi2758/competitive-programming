#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}