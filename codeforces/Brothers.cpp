#include <iostream>
using namespace std;

bool areBrothers(string s1, string s2)
{
    int spc1 = s1.find_first_of(" ");
    int spc2 = s2.find_first_of(" ");
    return s1.substr(spc1 + 1, s1.length()) == s2.substr(spc2 + 1, s2.length());
}

int main()
{

    string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    cout << (areBrothers(s1, s2) ? "ARE Brothers" : "NOT");
}