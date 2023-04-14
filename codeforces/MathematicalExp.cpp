#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char ops, eq;
    cin >> a >> ops >> b >> eq >> c;
    int actual;

    switch (ops)
    {
        case '+':
            actual = a + b;
            break;
        case '-':
            actual = a - b;
            break;
        case '*':
            actual = a * b;
            break;
    }
    
    cout << ((actual == c) ? "Yes" : std::to_string(actual));
}