#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << std::min(a, std::min(b, c)) << " " << std::max(a, std::max(b, c));
}