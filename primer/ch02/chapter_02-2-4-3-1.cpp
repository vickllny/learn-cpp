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

    return 0;
}