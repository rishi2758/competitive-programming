#include <iostream>
using namespace std;

void evaluate(int a, int b, char op)
{
    bool isCorrect = false;
    switch (op)
    {
    case '<':
        isCorrect = a < b;
        break;
    case '>':
        isCorrect = a > b;
        break;
    case '=':
        isCorrect = a = b;
        break;
    }
    cout << (isCorrect ? "Right" : "Wrong");
}

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    evaluate(a, b, op);
}