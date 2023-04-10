#include <iostream>
using namespace std;

typedef unsigned long long int ull_int;

int digitSummation(ull_int n1, ull_int n2)
{

    int r1 = n1 % 10;
    int r2 = n2 % 10;

    return r1 + r2;
}

int main()
{

    ull_int n1, n2;
    cin >> n1 >> n2;
    cout << digitSummation(n1, n2);
}