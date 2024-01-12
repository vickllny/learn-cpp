#include <iostream>

using namespace std;

//2.1.3
//page 35
//literal

int main(){

    int a = 0x14;
    char c = 'c';
    string str = "abc"; //长度是4 存在一个空字符  \0
    cout << "a really, really long string literal "
        "that spans two lines" << endl;

    //转义
    cout << '\n';
    cout << "\tHi!\n" << endl;

    cout << "Hi \x4dO\115!\n" << endl;
    cout << '\115' << '\n' << endl;

    return 0;
}