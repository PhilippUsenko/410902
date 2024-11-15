//
//  main.cpp
//  test
//
//  Created by Никита Горьковой on 4.09.24.
//

#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    
    double radius;
    
    while (true) {
        cout << "Enter radius: ";
        if (cin >> radius) {
            
            double square = 3.14 * radius * radius;
            double length = 3.14 * radius * 2;
            
            cout << "Your area is round: " << square << endl;
            cout << "Your circumference: " << length << endl;
            break;
        } else {
            cout << "Incorrect data type, the radius must be a number" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }

    }
    return 0;
}
