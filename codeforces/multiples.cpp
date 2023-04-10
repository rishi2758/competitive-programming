#include <iostream>
using namespace std;

typedef unsigned long int ul_int;

bool evaluate(ul_int n1, ul_int n2)
{
    return n2 % n1 == 0 || n1 % n2 == 0;
}

int main()
{
    ul_int n1, n2;
    cin >> n1 >> n2;
    string res = evaluate(n1, n2) ? "Multiples" : "No Multiples";
    cout << res;
}
