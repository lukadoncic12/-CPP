#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main(){
    int nums[] = {1,2,3,4,5,4};
    set<int> set_a;

    for(auto const& num : nums ){
        set_a.insert(num);
    }

    vector<int> result;
//    for(int i = 0; i < set_a.size() ; i++){
//        result.push_back(set_a[i]);   set不支持随机访问，需使用迭代器
//    }

    for(auto it = set_a.begin(); it != set_a.end() ; ++it){
        result.push_back(*it);
    }

    cout << *set_a.end() << endl;   //end()迭代器中没有内容，它指向最后一个元素的后一位，起到一个“哨兵”的作用


    for(auto const& num : result){
        cout << num << endl;
    }

    return 0;
}
