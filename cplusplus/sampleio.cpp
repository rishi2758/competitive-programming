#include <iostream>
using namespace std;

void evaluate(int score)
{
    if(score < 0 || score > 100) {
        cout << "Invalid score provided.";
    }

    if (score < 35)
    {
        cout << "F";
    }
    else if (score < 50)
    {
        cout << "E";
    }
    else if (score < 60)
    {
        cout << "D";
    }
    else if (score < 70)
    {
        cout << "C";
    }
    else if (score < 85)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }
}

int main()
{
    int score;
    char execute = 'y';
    do
    {
        cout << "enter marks obtained to obtain grades \n";
        cin >> score;
        evaluate(score);
        cout << endl;
        cout << "Press y or Y to continue..\n";
        cin >> execute;
    } while (execute == 'y' || execute == 'Y');
}