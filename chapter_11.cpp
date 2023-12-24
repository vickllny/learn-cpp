//
// Created by vickllny on 2023/12/24.
// final/override
// 虚函数和纯虚函数
//

#include <iostream>
#include <list>
#include <string>

using namespace std;


class A {
public:
    virtual void foo() {
        cout << "A::foo() is called" << endl;
    }
    virtual void foo1() final {
        cout << "A::foo1() is called" << endl;
    }

    virtual void bar()=0;
};

class B:public A {
public:
    void foo() override final {
        cout << "B::foo() is called" << endl;
    }
//    void foo1() override{
//        cout << "B::foo1() is called" << endl;
//    }

    void bar() override {
        cout << "B::bar() is called" << endl;
    }
};

class C:public B {
//    void foo() override {
//        cout << "C::foo() is called" << endl;
//    }
public:
    void bar() override {
        cout << "C::bar() is called" << endl;
    }
};

class D final: private C {
public:
    void bar() override {
        cout << "D::bar() is called" << endl;
    }
};

int main(){
    A *a = new B();
    a->foo();
    a->bar();
    cout << endl;
    a = new C();
    a->foo();
    a->bar();
    D *d = new D();
    cout << endl;
//    d->foo();
    d->bar();
    return 0;
}