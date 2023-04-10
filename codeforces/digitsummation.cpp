#include <iostream>
using namespace std;

int digitSummation(long n1, long n2)
{

    int r1 = n1 % 10;
    int r2 = n2 % 10;

    return r1 + r2;
}

int main()
{

    long n1, n2;
    cin >> n1 >> n2;
    cout << digitSummation(n1, n2);
}