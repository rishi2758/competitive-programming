#include <iostream>
using namespace std;

typedef unsigned long long int ull_int;

ull_int rangeSum(ull_int l, ull_int r)
{   
    if(l > r) {
        ull_int tmp = l;
        l = r;
        r = tmp;
    }
    
    ull_int sumTillL = (l * (l - 1)) / 2;
    ull_int sumTillR = (r * (r + 1)) / 2;
    return sumTillR - sumTillL;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        ull_int l, r;
        cin >> l >> r;
        cout << rangeSum(l, r) << endl;
        --t;
    }
}