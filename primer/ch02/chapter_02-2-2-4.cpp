#include <iostream>

using namespace std;

//2.2.4
//page 43
//作用域

int reuse = 42;

int i = 42;
int main(){
    // TODO
    int unique = 0;
    cout << reuse << " " << unique << endl;
    int reuse = 0;
    cout << reuse << " " << unique << endl;

    cout << ::reuse << " " << unique << endl;

    // 2.13
    // int i = 100;
    // int j = i; //j => 100
    // cout << j << endl;

    // 2.14
    int i = 100, sum = 0;
    for(int i = 0; i != 10; ++i){
        sum += i;
    }
    cout << i << " " << sum << endl;
    return 0;
}