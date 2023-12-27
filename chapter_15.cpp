#include <iostream>
#include <string>
#include <map>

using namespace std;

//委托构造函数和继承构造函数
//https://www.bilibili.com/video/BV1bX4y1G7ks/?p=19&spm_id_from=pageDriver&vd_source=240260c8cdca141b2447105a672fe65e

//委托构造函数
class User {
public:
    User(){}
    explicit User(string user_name) {
        this->user_name = std::move(user_name);
    }

    User(string user_name, int age): User(std::move(user_name)){
        this->age = age;
    }

    User(string user_name, int age, int gender): User(std::move(user_name), age){
        this->gender = gender;
    }

    void func(string name){
        cout << "User->name: " << name << endl;
    }

    void func(string name, int age){
        cout << "User->name: " << name << endl;
        cout << "User->age: " << age << endl;
    }

    string user_name;
    int age;
    int gender;
};

class StudentUser: public User {
public:
    //using 使用
    using User::User;
    using User::func;
    StudentUser(string user_name, int age, int gender, int student_no): User(std::move(user_name), age, gender){
        this->student_no = student_no;
    }

    void func(){
        cout << "StudentUser->null" << endl;
    }
private:
    int student_no{};
};

int main(){
    User* user = new User("vickllny");
    StudentUser studentUser("vickllny", 28, 1);
    studentUser.func();
    studentUser.func("vickllny");
    studentUser.func("vickllny", 28);
    return 0;
}