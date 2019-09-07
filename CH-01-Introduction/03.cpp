/* 
生日贺卡（支持空格）
*/
#include <iostream>
using namespace std;

int main() {
    char receiver_name[50], sender_name[50];
    cin.getline(receiver_name,50);
    cin.getline(sender_name, 50);
    cout << "Dear " << receiver_name << ", "<< endl;
    cout << "  Happy birthday to you!" << endl;
    cout << "        Yours " << sender_name << endl;
    return 0;
}