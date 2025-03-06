#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int minKindsQue(int questions[], int size_){
    int kindsNum = 1;
    int peopleNum = size_/2;
    //统计各类题目出现频率
    map<int,int> frequency;
    for(int i = 0; i < size_; i ++){
        frequency[questions[i]]++;
    }
    //装入vector并按频率进行排序
    vector<pair<int,int>> vec;
    for(auto const& pair : frequency){
        vec.push_back({pair.first,pair.second});
    }
    sort(vec.begin(),vec.end(),[](pair<int,int> &a, pair<int,int> &b){
         return a.second > b.second;});
    //判断至少需要几种题目
    int temp = 0;
    for(auto const& pair_: vec){
        temp += pair_.second;
        if(temp >= peopleNum){ //当前题目的数量足够
            break;
        }else{
            kindsNum++;
        }
    }
    return kindsNum;

}

int main(){
    int questions[] = {2,1,3,2,2,3,9,5,3,8,0};
    int size_ = sizeof(questions)/sizeof(questions[0]);
    int result = minKindsQue(questions,size_);
    cout << result ;
    return 0;
}
