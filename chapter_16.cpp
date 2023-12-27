#include <iostream>
#include <string>
#include <map>

using namespace std;

//列表初始化
//https://www.bilibili.com/video/BV1bX4y1G7ks/?p=21&spm_id_from=pageDriver&vd_source=240260c8cdca141b2447105a672fe65e

class Person {
    public:
        Person(string name): name(name){
            cout << "name: " << name << endl;
        }
        Person(string name, int age): name(name), age(age){
            cout << "name: " << name << ", age: " << age << endl;
        }

    private:
        string name;
        int age;
};

int main(){
    Person p1("vickllny1");
    string name = "vickllny2";
    Person p2 = name;
    Person p3 = {"vickllny3"};
    Person p4{ "vickllny4" };//初始化列表

    int a1 = { 1314 };//普通变量初始化
    int a1{ 1314 };
    int arr1[] = { 1,2,3,4 };
    int arr2[] = { 1,2,3 };

    int* p = new int{ 520 };
    double b = double { 250.1314 };
    int* array = new int[3]{ 1,2,3 };

    return 0;
}