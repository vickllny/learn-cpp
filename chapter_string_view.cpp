//
// Created by vickllny on 2023/12/24.
//string_view

#include <iostream>
#include <string_view>

using namespace std;

int main(){
    string_view s = "abcdaefghijklmnopqrstuvwxyz";
    auto it = s.begin();
    for(; it != s.end(); ++it){
        cout << "char type: " << typeid(it).name() << endl;
        cout << "char: " << *it << endl;
    }
}
