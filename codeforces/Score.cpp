/*"You are given an integer array nums. Two players are playing a game with this array: player 1 and player 2.

Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of 0. At each turn, the player takes one of the numbers from either end of the array (i.e., nums[0] or nums[nums.length - 1]) which reduces the size of the array by 1. The player adds the chosen number to their score. The game ends when there are no more elements in the array.

Return true if Player 1 can win the game. If the scores of both players are equal, then player 1 is still the winner, and you should also return true. You may assume that both players are playing optimally.

Input: nums = [1,5,2]
Output: false
Explanation: Initially, player 1 can choose between 1 and 2.
If he chooses 2 (or 1), then player 2 can choose from 1 (or 2) and 5. If player 2 chooses 5, then player 1 will be left with 1 (or 2).
So, final score of player 1 is 1 + 2 = 3, and player 2 is 5.
Hence, player 1 will never be the winner and you need to return false."*/

/*
    track maxScore
    playerTurn
    ms1
    ms1
    canWin(nums,0,n) -> canWin(nums,1,n) || canWin(nums,0,n-1) -> true
 */
#include <stdio.h>
#include <iostream>
#include <bits/stdc++>
using namespace std;
 
// Calculating size of an array
template <typename T, size_t N>
 
int array_size(T (&arr)[N])
{
    return N;
}

using namespace std;

int maxp1Score = 0;
int maxp2Score = 0;

bool canWin(int scores[], int i, int j, bool isP1)
{
    if (i <= j)
    {
        if (isP1)
        {
            if (canWin(scores, i + 1, j, false))
            {
                maxp1Score += scores[i];
            }
            if (canWin(scores, i, j - 1, false))
            {
                maxp1Score += scores[j];
            }
        }
        else
        {
            if (canWin(scores, i + 1, j, true))
            {
                maxp2Score += scores[i];
            }
            if (canWin(scores, i, j - 1, true))
            {
                maxp2Score += scores[j];
            }
        }
    }
    return maxp1Score >= maxp2Score;
}

bool solution(int scores[])
{
    int size = array_size(scores);
    cout << size;
    return canWin(scores, 0, size - 1, true);
}

int main()
{
    int scores[] = {1, 1, 1};
    string ans = solution(scores) ? "Yes" : "No";
    cout << "Does player 1 wins ? " + ans;
}