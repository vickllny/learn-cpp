#include <iostream>

using namespace std;

//practice 1.4.1
//page 11

int main(){

    //1.9
    int val = 50, r = 0;
    while (val <= 100)
    {
        /* code */
        r += val;
        val++;
    }
    cout << "the pratice 1.9 value is: " << r << endl;
    
    //1.10
    int val1 = 10;
    while (--val1 > 0)
    {
        /* code */
        cout << val1 << endl;
    }

    //1.11
    cout << "Please enter two numbers" << endl;
    int start = 0, end = 0;
    cin >> start >> end;
    if(start < end){
        while (++start < end)
        {
            /* code */
            cout << start << endl;
        }
        
    }else if(start > end){
        while (++end < start)
        {
            /* code */
            cout << end << endl;
        }
    } else {
        cout << "two number are equals." << endl;
    }

    return 0;
}