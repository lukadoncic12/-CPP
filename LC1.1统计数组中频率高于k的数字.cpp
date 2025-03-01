#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> CountFrequency( int nums[],int nums_size, int k){
    vector<int> vec; //存储结果
    map<int,int> frequency; //数字值与频率的映射
    //统计频率

    for(int i=0; i< nums_size ; i++){
        frequency[nums[i]]++;
    }

    //筛选频率高于k的数字
    for(auto const&pair:frequency){
        if(pair.second >= k){
            vec.push_back(pair.first);
        }
    }

    return vec;
}

int main(){

    int nums[] = {1,1,1,2,3,3,4,5,6}; //示例
    int k = 2;
    int nums_size = sizeof(nums)/sizeof(nums[0]); //静态数组当参数传入是会退化成指针，size要在外面先算好当参数传入

    vector<int> result = CountFrequency(nums,nums_size,k);

    for(auto const& num:result){
        cout << num << "  ";
    }

    return 0;
}
