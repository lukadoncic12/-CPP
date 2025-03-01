#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<string> TopKString(vector<string> &strs, int k){
    vector<string> result;
    map<string,int> frequency;
    //统计频率
    for(auto const&str : strs){
        frequency[str]++;
    }
    //装入vector
    vector<pair<string,int>> pairs;
    for(auto const&pair : frequency){
        pairs.push_back({pair.first,pair.second});
    }
    //依据频率对pairs排序
    sort(pairs.begin(),pairs.end(),[](const pair<string,int> &a, const pair<string,int> &b){
         return a.second > b.second;
         });
    //输出频率前K高的字符串
    int count_ = 0;
    for(auto const&pair : pairs){
        if(count_ == k){
            break;
        }
        result.push_back(pair.first);
        count_++;
    }


    return result;

}

int main(){
    int k = 2;
    vector<string> str_vector = {"i","love","leecode","i","love","coding"};

    auto result = TopKString(str_vector,k);
    //输出结果
    for(auto const& str: result){
        cout << "“" << str << "”  " << endl;
    }
    return 0;
}
