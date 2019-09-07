/*
* Copyright (c) 2019, Andrew Xie
* All rights reserved.
*
* Calculate e
*
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double e = 1.0, u = 1.0;

    int n = 1;
    while (u > 1.0E-7) {
        u = u/n;
        e += u;
        n++;
    }

    cout << "e: " << e << endl;

    return 0;
}