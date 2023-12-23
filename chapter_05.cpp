//
// Created by vickllny on 2023/12/23.
// auto 3
//
#include "iostream"
#include "string"
#include "map"
using namespace std;


int func1(){
    map<int, string> person;
    person.insert(make_pair(1, "alice"));
    person.insert(make_pair(2, "jack"));
    person.insert(make_pair(3, "lucy"));
    map<int, string>::iterator it = person.begin();
    for(; it != person.end(); ++it){
        cout << "key: " << it->first << " ,value: " << it->second << endl;
    }

    return 0;
}

class T1{
public:
    static int get(){
        return 110;
    }
};

class T2 {
public:
    static string get(){
        return "this is auto.";
    }
};

template <class T>
void func(void){
    auto ret = T::get();
    cout << "ret: " << ret << endl;
}

template <class T, typename P>
void func3(void){
    P ret = T::get();
    cout << "ret: " << ret << endl;
}

int func2(){
    map<int, string> person;
    person.insert(make_pair(1, "alice"));
    person.insert(make_pair(2, "jack"));
    person.insert(make_pair(3, "lucy"));
    auto it = person.begin();
    for(; it != person.end(); ++it){
        cout << "key: " << it->first << " ,value: " << it->second << endl;
    }
    return 1;
}

int main(){
//    func2();
//    func<T1>();
//    func<T2>();
    func3<T1, int>();
    func3<T2, string>();
}