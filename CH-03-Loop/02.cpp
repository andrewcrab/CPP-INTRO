/*
* Copyright (c) 2019, Andrew Xie
* All rights reserved.
*
* Calculate y for:
*          y ^ n = x
*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;

    while(true){
        cin >> n >> x;
        if (n == 0 && x == 0){
            cout << "Program terminated..." << endl;
            break;
        }
        
        if ((x < 0 && n <= 0) || (x < 0 && 1/n != int(1/n))){
            cout << "Wrong input..." << endl;
            continue;
        }
        cout << "Root: " << pow(x, 1.0/n) << endl;
        return 0;
    }
    

    return 0;
}