#include <iostream>

using namespace std;

#define url "https://www.bilibili.com/video/BV1et411b73Z?p=28&vd_source=240260c8cdca141b2447105a672fe65e"

int main(){
    cout << "url is: " << url << endl;
    const int a = 10;
    cout << "int size of is: " << sizeof(a) << endl;
    //小猪重量
    double pigs[3] = {0,0,0};
    for(int i = 0; i < 3; i++){
        cout << "请输入第" << i+1 << "只小猪的重量" << endl;
        cin >> pigs[i];
    }
    int ret = 0;
    if(pigs[0] > pigs[1]){
        if(pigs[0] > pigs[2]){
            ret = 0;
        }else {
            ret = 2;
        }
    }else if(pigs[1] > pigs[2]){
        ret = 1;
    }else {
        ret = 2;
    }
    cout << "第" << ret + 1 << "只小猪的重量最大！" << endl;
    //const string url = "https://www.bilibili.com/video/BV1et411b73Z?p=29&spm_id_from=pageDriver&vd_source=240260c8cdca141b2447105a672fe65e"
    //三目
    return 0;
}