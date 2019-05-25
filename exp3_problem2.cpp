// Experiment 3, Problem 2
// Created on May 24, 2019
// Code by Louis Mirano | 2018110858 | 1-29
#include <iostream>
using namespace std;

int main()
{
    int i;
    float A[7], B[7], C[7];
    
    cout << "Enter the temperatures of Province A from the past week:" << endl;
    for(i = 0; i < 7; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> A[i];
    }
    
    cout << endl;
    cout << "Enter the temperatures of Province B from the past week:" << endl;
    for(i = 0; i < 7; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> B[i];
    }
    
    cout << endl;
    cout << "Enter the temperatures of Province C from the past week:" << endl;
    for(i = 0; i < 7; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> C[i];
    }
    
    cout << endl;
    cout << endl;
    cout << "The temperatures are as of follows:" << endl;
    cout << endl;
    for (int i = 0; i < 1; i++)
    {
        cout << "Province A, Day 1: " << A[0] << endl;
        cout << "Province A, Day 2: " << A[1] << endl;
        cout << "Province A, Day 3: " << A[2] << endl;
        cout << "Province A, Day 4: " << A[3] << endl;
        cout << "Province A, Day 5: " << A[4] << endl;
        cout << "Province A, Day 6: " << A[5] << endl;
        cout << "Province A, Day 7: " << A[6] << endl;
        cout << endl;
        cout << "Province B, Day 1: " << B[0] << endl;
        cout << "Province B, Day 2: " << B[1] << endl;
        cout << "Province B, Day 3: " << B[2] << endl;
        cout << "Province B, Day 4: " << B[3] << endl;
        cout << "Province B, Day 5: " << B[4] << endl;
        cout << "Province B, Day 6: " << B[5] << endl;
        cout << "Province B, Day 7: " << B[6] << endl;
        cout << endl;
        cout << "Province C, Day 1: " << C[0] << endl;
        cout << "Province C, Day 2: " << C[1] << endl;
        cout << "Province C, Day 3: " << C[2] << endl;
        cout << "Province C, Day 4: " << C[3] << endl;
        cout << "Province C, Day 5: " << C[4] << endl;
        cout << "Province C, Day 6: " << C[5] << endl;
        cout << "Province C, Day 7: " << C[6] << endl;
    }
    
    
    
    return 0;
}
