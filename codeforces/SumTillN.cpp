#include <iostream>
using namespace std;

typedef unsigned long long int ull_int;

ull_int sum(ull_int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    ull_int n;
    cin >> n;
    cout << sum(n);
}