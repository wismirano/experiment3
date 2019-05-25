// Experiment 3, Problem 1
// Created on May 24, 2019
// Code by Louis Mirano | 2018110858 | 1-29
#include <iostream>

using namespace std;

int main(){
    int input[1000], output[1000], count, i;
    
    cout << "Enter number of elements in array: " << endl;
    cin >> count;
    
    cout << "Enter " << count << " numbers:" << endl;
    
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
    
    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }

    cout << "Reversed Array is: " << endl;
    for(i = 0; i < count; i++){
        cout << output[i] << " ";
    }
    cout << endl;
    cout << "Number of elements of the array is: " << count << endl;
    
    return 0;
}
