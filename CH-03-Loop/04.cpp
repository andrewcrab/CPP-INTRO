/*
* Copyright (c) 2019, Andrew Xie
* All rights reserved.
*
* Calculate any input of the following form:
*          1 + 1
*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num_1, num_2;
    char op;
    cin >> num_1 >> op >> num_2;

    switch (op){
        case '+':
            cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
            break;
        case '-':
            cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
            break;
        case '*':
            cout << num_1 << " x " << num_2 << " = " << num_1 * num_2 << endl;
            break;
        case '/':
            cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;
            break;
    }

    return 0;
}