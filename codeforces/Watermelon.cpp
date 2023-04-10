#include <iostream>
using namespace std;

bool canDivide(int w)
{
    return w % 2 == 0 && (w / 2) > 1;
}

int main()
{
    int w;
    cin >> w;
    string ans = canDivide(w) ? "YES" : "NO";
    cout << ans;
}