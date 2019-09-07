/* 
复利计算（使用模拟方法）
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, year, interest_rate;
    double total;

    cin >> base >> year >> interest_rate;

    total = base;
    for (int i = 1; i <= year; i++){
        total *= (1 + interest_rate);
    }

    cout << "Total amount: " << total << endl;

    return 0;
}