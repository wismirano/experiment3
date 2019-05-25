// Experiment 3, Problem 1
// Created on May 24, 2019
// Code by Louis Mirano | 2018110858 | 1-29
#include <iostream>
using namespace std;

int main()
{
    int max, min, i;
    float num[10], sum=0.0;
    float average;
    
    cout << "Enter up to ten numbers to get the smallest and the largest number, the total, and the average." << endl;
    
    for(i = 0; i < 10; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    
    max = num[0];
    for (i = 0; i < 10; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    min = num[0];
    for (i = 0; i < 10; i++)
    {
        if (min > num[i])
            min = num[i];
    }
    average = sum / 10;
    cout << "The smallest number is = " << min << endl;
    cout << "The largest number is = " << max << endl;
    cout << "The total is = " << sum << endl;
    cout << "The average is = " << average << endl;
    return 0;
}
