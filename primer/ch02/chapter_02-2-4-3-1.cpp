#include <iostream>
#include <vector>


//2.4.3
//page 57
// 顶层const

class Test {
    public:
        void Print(std::size_t pos) const {
            std::cout << (*this)[pos] << std::endl;
        }

        const int& operator[] (std::size_t pos) const {
            return vec[pos];
        }

        int& operator[] (std::size_t pos) {
            //非const调用const
            return const_cast<int&>(const_cast<Test&>(*this)[pos]);
        }
        std::vector<int> vec;
};

int main(){

    Test test;
    test.vec = { 1, 2, 3, 4, 5};
    test.Print(0);

    // const int a = 20;
    // int b = a;
    // const int const *p = &a;
    // const int *p1 = &a;
    // const int &r = a;
    // r = 22;
    // *p = 22;
    // *p1 = 22;

    int a = 22;
    const int a1 = a;
    int *const a1p = &a1;
    int a2 = a;
    const int &ar = a;
    const int *ap = &a;
    const int *const ap1 = &a;
    int *const ap2 = &a;
    int b = 10;
    ap = &b;
    ap1 = &b; // error
    ap2 = &b;

    int *const ap3 = &a;
    const int *const ap4 = &ar;
    *ap3 = 23;
    *ap4 = 23;

    int &r = 2;

    const int &r1 = 2;
    const int *p1 = &a1;

    const int const & r2;

    int *const cp;
    const int *cp1;

    return 0;
}