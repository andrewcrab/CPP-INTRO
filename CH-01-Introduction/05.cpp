/* 
¸´Àû¼ÆËã
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, year, interest_rate;

    cin >> base >> year >> interest_rate;

    cout << "Total amount: " << base * pow((1 + interest_rate), year) << endl;

    return 0;
}