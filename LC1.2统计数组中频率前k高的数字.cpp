#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<int> CountFrequency( int nums[],int nums_size, int k){
    vector<int> vec; //存储结果
    map<int,int> frequency; //数字值与频率的映射

    //统计频率
    for(int i=0; i< nums_size ; i++){
        frequency[nums[i]]++;
    }

    //将map中键值对对象pair存入vector进行排序
    vector<pair<int,int>> cnt; //存储pair对象的数组容器
    for(auto const& pair : frequency){
        cnt.push_back({pair.first,pair.second});  //将pair对象pushback进vector用{}
    }

    sort(cnt.begin(),cnt.end(),[](const pair<int,int> a,const pair<int,int> b){
         return a.second > b.second ;
         }); //用lamuda表达式自定义排序方式



    //筛选频率前k高的数字
    for(int i = 0; i < k; i ++){
        vec.push_back(cnt[i].first);
    }


    return vec;
}

int main(){

    int nums[] = {1,1,1,2,3,3,4,5,6}; //示例
    int k = 5;
    int nums_size = sizeof(nums)/sizeof(nums[0]); //静态数组当参数传入是会退化成指针，size要在外面先算好当参数传入

    vector<int> result = CountFrequency(nums,nums_size,k);

    for(auto const& num:result){
        cout << num << "  ";
    }

    return 0;
}

