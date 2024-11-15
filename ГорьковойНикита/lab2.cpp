//
//  main.cpp
//  lab2
//
//  Created by Никита Горьковой on 6.09.24.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int firstNumber;
    int secondNumber;
    
    cout << "Enter first number (A): ";
    cin >> firstNumber;
    
    cout << "Enter second number (B): ";
    cin >> secondNumber;
    
    if (firstNumber == secondNumber) {
        firstNumber = 0;
        secondNumber = 0;
    } else {
        int sum = firstNumber + secondNumber;
        firstNumber = sum;
        secondNumber = sum;
    }
    
    cout << "First number (A): " << firstNumber << endl;
    cout << "second number (B): " << secondNumber << endl;
    
    return 0;
}
