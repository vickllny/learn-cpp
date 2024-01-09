#include <iostream>

using namespace std;

//practice 1.2

int main(){

    // cout << "Enter tow numbers:" << endl;
    // int v1 = 0, v2 = 0;
    // cin >> v1 >> v2;
    // cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
    //1.3
    cout << "Hello, World" << endl;
    //1.4
    cout << "Enter tow numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    // cout << "The multiply of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
    //1.5
    cout << "The multiply of ";
    cout << v1 ;
    cout << " and " ;
    cout << v2; 
    cout << " is ";
    cout << v1 * v2;
    cout << endl;
    //1.6 不合法，因为输出运算符左边必须是一个ostream对象
    // cout << "The multiply of " << v1;
    // << " and " << v2;
    // << " is " << v1 * v2 << endl;
    return 0;
}