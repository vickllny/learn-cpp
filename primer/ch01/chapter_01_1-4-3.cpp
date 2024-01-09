#include <iostream>

using namespace std;

//practice 1.4.3
//page 13

int main(){
    cout << "请输入一组数" << endl;
    int val = 0, sum = 0;
    while(cin >> val)
    {
        sum += val;
    }
    cout << "The sum value is :" << sum << endl;
    return 0;
}