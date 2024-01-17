#include <iostream>

using namespace std;

//2.3.2
//page 47
//指针

static void handler(int signo) {
	std::cout << "signal no:" << signo << std::endl;
	exit(-1);
}

int main(){

    int ival = 42;
    int *p = &ival;
    cout << *p << endl;
    *p = 52;
    cout << *p << endl;
    cout << ival << endl;
    int &p2 = *p;
    p2 = 155;
    cout << *p << endl;
    cout << p2 << endl;
    cout << ival << endl;

    // NP
    // 预处理变量不属于命名空间
    int *pp1 = nullptr;
    int *pp2 = 0;
    int *pp3 = NULL;
    cout << *pp1 << endl;
    cout << *pp2 << endl;
    cout << *pp3 << endl;

    int zero = 0;
    int *pi = 0;
    pi = 0;

    int i = 42;
    int *pi = 0; //等价nullptr
    int *pi2 = &i;//i的地址
    int *pi3; //未初始化
    pi3 = pi2; //和pi2一样指向了i的地址
    pi2 = 0; // pi2是nullptr

    //更改指针值 p = &v;
    //更改指针指向的对象值 *p = 0; 使用解引用符号

    // void* 指针
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    void *pv1 = pd;


    // 2.18
    int i = 102;
    int *p = nullptr;
    p = &i;
    cout << *p << endl;
    *p = 225;
    cout << *p << endl;
    cout << i << endl;

    // 2.19
    // 引用不是对象，是对象的别名，是一种和对象的绑定关系，定义时必须初始化，一旦初始化就不能更改其对象绑定关系
    // 指针是对象，指针是指向对象的地址，定义时无须初始化，可更改该指针指向的对象

    // 2.20
    int i = 42; // 定义对象i，初始值42
    int *p1 = &i; // 定义指针指向对象i
    *p1 = *p1 * *p1; // 解引用指针p1的值做计算，最终对象i的值是 42 * 42 = 1764
    cout << *p1 << endl;

    // 2.21
    int i = 0;
    double* dp = &i;// incorrect 类型不匹配
    int *dp = i;// incorrect 不能把int变量直接赋值给指针
    int *p = &i; // correct

    // 2.22
    if (p) // 判断指针p是否有效
    if (*p) // 判断指针p指向的int类型对象的值是否非0
    int i = 1;
    int *p = &i;
    if(*p){
        cout << 1111 << endl;
    }

    // 2.23
    // 可通过使用智能指针调用相关方法实现

    // 2.24
    int i = 42;
    void *p = &i; // void* 指针存放任意对象的地址
    long *lp = &i; // 类型不匹配

    return 0;
}