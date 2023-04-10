#include <iostream>
using namespace std;

typedef signed long int sl_int;

int main()
{

    sl_int a, b, c;
    cin >> a >> b >> c;
    int min = -std::max(-a, std::max(-b, -c));
    int max = std::max(a, std::max(b, c));
    int mid = (a + b + c) - (max + min);
    
    cout << min << endl
         << mid << endl 
         << max << endl;

    cout << endl;

    cout << a << endl
         << b << endl
         << c << endl;
}
