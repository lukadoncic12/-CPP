#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> //包含accumulate函数

using namespace std;

int main(){
    //<algorithm>头文件中包含的算法适用于支持迭代器的各种容器
    //find（）、sort（）、remove（）等等

    vector<int> vec = {2,5,3,4,1};


    // 1. 排序
    sort(vec.begin(),vec.end());//从小到大排序
    stable_sort(vec.begin(),vec.end()); //稳定排序
    partial_sort(vec.begin(),vec.begin()+3,vec.end());//部分排序，前n个最小元素排到前面


    // 2. 查找
    find(vec.begin(),vec.end(),3);//找到时返回该元素的迭代器，否则返回.end（）
    int count_3 = count(vec.begin(),vec.end(),3); //count次数


    // 3. 修改
    fill(vec.begin(),vec.begin()+2,0);// 指定范围内元素填充某个值
    replace(vec.begin(),vec.end(),3,10);//指定范围内，旧值替换为新值


    // 4.1 删除（两步走）
    //erase()要写vec.erase() !!!!!
    auto new_end = remove(vec.begin(),vec.end(),3);//将所有值为3的元素全部移到vector的末尾
                                                    //返回一个迭代器，指向第一个要删除的元素
    vec.erase(new_end,vec.end()); //将末尾的要删除的元素删除


    //4.2 unique
    sort(vec.begin(),vec.end());
    auto new_end2 = unique(vec.begin(),vec.end());  //删除相邻的重复值，需要先排序
    vec.erase(new_end2,vec.end());//与删除同理


    // 5.其他算法
    //accumulate函数在<numeric>头文件中
    int sum = accumulate(vec.begin(),vec.end(),0);//求和，参数0是初始值
    reverse(vec.begin(),vec.end()); //反转
    rotate(vec.begin(),vec.begin()+2,vec.end());//部分旋转，{1，2，3，4，5，6} -> {3,4,5,6,1,2}

    return 0;
}

