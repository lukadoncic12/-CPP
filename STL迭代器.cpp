#include<iostream>
#include<vector>
#include<algorithm> //包含find（）

using namespace std;

int main(){

    // 迭代器对象可由下列方法获得
    //.begin() 、 .end() .find()、

    vector<int> vec = {1,2,3,4,5};

    //迭代器iterator 一般简写为it
    //迭代器可以进行加减，类似字符串的指针
    auto it = vec.begin();
    auto it2 = vec.begin() + 1;

    //迭代器类似指针，可以解指针
    int first_num = *vec.begin();
    cout << first_num << endl;

    //find（）方法的使用
    //查找值为3的元素
    //返回一个迭代器
    auto it3 = find(vec.begin(),vec.end(),3);
    if(it3 != vec.end()){
        cout << "找到了， 值是" << *it3 << endl;
    }else{
        cout << "没找到" << endl;
    }

    //算法<algorithm>中的方法基本上都与迭代器有关，如find（）、sort（）、erase（）；


    return 0;
}
