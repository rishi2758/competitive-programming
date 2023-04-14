#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;
    int y = n;
    double part = n - y;
    if (part == 0)
    {
        cout << "int " << y;
    }
    else
    {
        cout << "float " << y << " " << part;
    }
}