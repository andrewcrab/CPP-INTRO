/* 
��Ŀ���ݣ�

���û�����һ��Ӣ����ĸ�󣬳����ܹ�������ĸ���˳���ӡ��3�����ڵ���ĸ�������û��������ĸ���м䡣
�������н�����£�

d

cde

���������ĸ����β������ĸ�������ġ���������ĸZ����������YZA��
�����ʽ:
һ����ĸ�ַ�������Ϊ��д��Ҳ����ΪСд��

�����ʽ��
����3���ַ�����Сд���䡣

����������
d
���������
cde 
*/

#include <iostream>
#include <cmath>

using namespace std;
int main() {
    char c;
    cin >> c;

    switch(c) {
        case 'a':
            cout << "zab" << endl;
            break;
        case 'A':
            cout << "ZAB" << endl;
            break;
        case 'z':
            cout << "yza" << endl;
            break;
        case 'Z':
            cout << "YZA" << endl;
            break;
        default:
            cout << char(c - 1) << c << char(c + 1) << endl;
            break;
    }
    return 0;
}