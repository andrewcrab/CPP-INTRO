/* 温度转换（20分）
题目内容：
输入华氏温度，用下列公式将其转换为摄氏温度并输出。
C=5/9*(F-32)

输入格式：
   实数

输出格式：
转换后的摄氏温度，实数。

输入样例：
80

输出样例：
26.6667 */

#include <iostream>
using namespace std;

int main() {
    double f;

    cin >> f;
    cout << 5.0/9*(f-32) << endl;
    
    return 0;
}