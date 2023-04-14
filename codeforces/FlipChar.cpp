#include <iostream>
using namespace std;

char flip(char input)
{
    // lowercase
    if (97 <= input && input <= 122)
    {
        return input - 32;
    }
    // uppercase
    if (65 <= input && input <= 90)
    {
        return input + 32;
    }
}

int main()
{
    char input;
    cin >> input;
    cout << flip(input);
}