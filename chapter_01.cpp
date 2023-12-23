#include "iostream"
#include "string"
using namespace std;

//
// Created by vickllny on 2023/12/23.
//

void func(int v){
    cout << "func(int v)" << endl;
}

void func(char* v){
    cout << "func(char* v)" << endl;
}


int main(){
    string str = R"xxx(zxczxcz)xxx";
    string str1 = R"xxx(
        <html>
            <body>
            </body>
        </html>
        )xxx";
    cout << str << endl;
    cout << str1 << endl;

    //指针
    int* ptr1 = NULL;
    char* ptr2 = NULL;
    double* ptr3 = NULL;
    void* ptr4 = NULL;

    int* ptr5 = (int*)ptr4;
    func(10);
    func(nullptr);
    return 0;
}