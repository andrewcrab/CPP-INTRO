/* 
小写转大写（20分）
题目内容：
用户输入一个字符，如果是小写字母输出对应的大写字母，其他字符不转换。
提示：使用三目条件运算符 ...？... ：...

输入格式：
一个字符

输出格式：
一个字符

输入样例：
d

输出样例：
D 
*/

#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c > 'z' || c < 'A' || (c > 'Z' && c < 'a')){
        return 0;
    }else {
        cout << (c >= 'a' ? char(c - 32) : char(c + 32)) << endl;
    }
    
    return 0;
}