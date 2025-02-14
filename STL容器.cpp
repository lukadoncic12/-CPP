#include<iostream>
#include<vector>
#include<stack>
#include<array>
#include<queue>
#include<list>
#include<set>
#include<map>

using namespace std;

int main(){

    // insert（）、erase（）是容器的成员方法
    // find（）、sort（）、reverse（）、count（）等是<alogritm>头文件中的std方法

    // 1.简单容器
    vector<int> vec = {1,2,3,4,5}; //动态数组
    array<int,5> arr = {1,2,3,4,5};//静态数组，显式指定大小为5
    stack<int> stk; //栈，pop（）、push（）
    queue<int> que; //队列
    deque<int> deq;//双端队列，push_back()从尾部插入，push_front()从头部插入
    list<int> lst = {1,2,3,4,5}; //双向链表，push_back()从尾部插入，push_front()从头部插入

    // 2.set集合
    set<int> set1 = {1,2,3,4,5};//有序集合,没有重复值
    set1.insert(8);
    set1.erase(3);

    multiset<int> set2 = {1,1,2,2,3};//有序集合，允许重复值
    set2.count(2);//统计重复值次数

    // 3.map键值对
    map<int,string> map1 = {{1,"one"},{2,"two"}}; //有序键值对，键值唯一，按键值排序
    map1[3] = "three"; //插入键值对

    for(const auto &pair1: map1){
        cout << pair1.first << ":" << pair1.second << endl; //键：.first  值 ：.second
    }


    return 0;
}
