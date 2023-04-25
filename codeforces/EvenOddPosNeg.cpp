#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even = 0, odd = 0, positive = 0, negative = 0;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            if (nums[i] > 0)
            {
                ++positive;
            }
            else
            {
                ++negative;
            }
        }

        if (nums[i] % 2 == 0)
        {
            ++even;
        }
        else
        {
            ++odd;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}