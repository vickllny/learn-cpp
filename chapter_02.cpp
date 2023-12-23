//
// Created by vickllny on 2023/12/23.
//
#include "iostream"
#include "string"

using namespace std;

void func1(const int num){
    const int count = 24;
//    int array[count];
    int array[num];
}

struct T {
    int a;
};

void func1(){
    int a = 100;
    cout << "a:" << a << endl;

}
constexpr int  func2();

struct Person {

    constexpr Person(const char* name, int age) :name(name), age(age){
//        this->name = name;
//        this->age = age;
    }

    const char* name;
    int age;
};

int main(){
    const int i = 520;
    const int j = i + 1;
    constexpr int I = 520;
    constexpr int J = I + 1;

    constexpr T t{100};
//    t.a = 19;//error
    int a = func2();
    a = 12;
    cout << "a:" << a << endl;

    constexpr struct Person p1("lucky", 29);
    cout << "name: " << p1.name << ",age: " << p1.age << endl;
    return 0;
}

constexpr int func2(){
    int a = 100;
    return 100;
}



