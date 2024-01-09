#include <iostream>

using namespace std;

//practice 1.4.2
//page 12

int main(){
    //1.12
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
    }
    cout << "the sum value is: " << sum << endl;

    //1.13
    int r = 0;
    for (int val = 50; val <= 100; val++)
    {
        /* code */
        r += val;
    }
    cout << "the pratice 1.13 value is: " << r << endl;
    
    for (int val1 = 9; val1 > 0; val1--)
    {
        /* code */
        cout << val1 << endl;
    }

    cout << "Please enter two numbers" << endl;
    int start = 0, end = 0;
    cin >> start >> end;
    if(start < end){
        for (;start < end; ++start)
        {
            /* code */
            cout << start << endl;
        }
        
    }else if(start > end){
        for (; end < start; ++end)
        {
            /* code */
            cout << end << endl;
        }
    } else {
        cout << "two number are equals." << endl;
    }

    // 1.14
    /* 
    The main difference between the `for`'s and the `while`'s is a matter of pragmatics: 
    we usually use `for` when there is a known number of iterations, 
    and use `while` constructs when the number of iterations in not known in advance. 
    The `while` vs `do ... while` issue is also of pragmatics, 
    the second executes the instructions once at start, 
    and afterwards it behaves just like the simple `while`. 
    */
    // 1.15
    /*
    语法错误
    类型错误
    声明错误
    */
    return 0;
}