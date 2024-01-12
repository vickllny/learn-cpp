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

    auto b = L"a";
    cout << b << endl;

    //2.5
    // (a) 'a' 字符字面量, L'a' 宽字符字面量, "a" 字符串字面量, L"a" 宽字符串字面量 => L前缀表示宽字符 
    // (b) 10 十进制整数, 10u 无符号, 10L 十进制长整数, 10uL 十进制无符号长整数, 012 八进制整数, 0xC 十六进制整数
    // (c) 3.14 double, 3.14f float, 3.14L long double
    // (d) 10 十进制整数, 10u 十进制无符号整数, 10. double, 10e-2 double

    //2.6
    // int month = 9, day = 7; 十进制
    // int month = 09, day = 07; 八进制，但是month有误，八进制不能直接写9

    //2.7
    // (a) "Who goes with F\145rgus?\012"  Who goes with Fergus? 换行, string类型
    // (b) 3.14e1L long double
    // (c) 1024f 无效，1204是整形，f后缀只能用于浮点型
    // (d) 3.14L long double

    //2.8
    cout << "2\115\012" << endl;
    cout << "2\t\115\012" << endl;
    return 0;
}