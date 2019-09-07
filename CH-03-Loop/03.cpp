/*
* Copyright (c) 2019, Andrew Xie
* All rights reserved.
*
* Calculate x for:
*          ax^2 + bx +c = 0
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0){
        if (b == 0) {
            cout << "Wrong input..." << endl;
        }else {
            cout << "x1=x2=" << -c/b << endl;
        }
        return 0;
    }

    double delta = b * b - 4 * a * c;

    if (delta == 0) {
        cout << "x1=x2=" << -b/(2*a) << endl;
    }else if(delta > 0) {
        cout << "x1=" << (-b + pow(delta, 0.5))/(2*a) 
        << " , x2=" << (-b - pow(delta, 0.5))/(2*a)<< endl;
    }else {
        cout << "x1=" << -b/(2*a) << "+" << pow(-delta, 0.5)/(2*a) 
        << "i , x2=" << -b/(2*a) << "-" << pow(-delta, 0.5)/(2*a) << "i" << endl;
    }
    

    return 0;
}