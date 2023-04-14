#include <iostream>
using namespace std;

typedef unsigned long long int ull_int;
typedef unsigned long int ul_int;

string getLast2Digits(int a, int b, int c, int d)
{
    ull_int multiple = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    ull_int ans = multiple % 100;
    if (ans < 9)
    {
        return "0" + std::to_string(ans);
    }
    return std::to_string(ans);
}

int main()
{

    ul_int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << getLast2Digits(a, b, c, d);
}