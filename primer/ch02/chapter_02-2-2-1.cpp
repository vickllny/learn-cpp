#include <iostream>

using namespace std;

//2.2.1
//page 38
//变量

string global_str; // ""
int global_int; // 0

int main(){
    //TODO
    string book("aaaaa");
    cout << book << endl;
    //列表初始化
    int units_sold = {0};
    int units_sold1{1};
    int units_sold2{2};
    cout << units_sold << endl;
    cout << units_sold1 << endl;
    cout << units_sold2 << endl;
    //列表初始化编译错误
    // long double ld = 3.1415953536;
    // int a{ld}, b = {ld};//编译错误
    // int c(ld), d = ld;//正确执行，但是丢失部分值
    string empty;
    cout << empty << endl;

    //2.9
    // Q: cin >> int input_value;
    // A
    // int input_value;
    // cin >> input_value;

    // Q int i = { 3.14 };
    // A int i = 3.14 or int i(3.14)

    //Q double salary = wage = 9999.99;
    //A double salary = 9999.99, wage = salary;

    //Q int i = 3.14; => i = 3;//丢失部分值

    //2.10
    cout << " ===== " << endl;
    cout << global_str << endl;
    cout << global_int << endl;

    int local_int;
    string local_str;
    cout << " ====== " << endl;
    cout << local_int << endl;
    cout << local_str << endl;

    return 0;
}