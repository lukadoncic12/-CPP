#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>

using namespace std;

int MissingDigit(vector<int> & nums){
    int miss = -1;
    unordered_map<int,int> frequency;
    //数组中的数字频率加1
    for(int& num : nums){
        frequency[num]++;
    }
    //从0到n的频率都加1
    for(int i = 0; i <= nums.size() ; i++){
        frequency[i]++;
    }
    //缺失的数字频率为1
    for(auto const& pair : frequency){
        if(pair.second == 1){
            miss = pair.first;
        }
    }
    return miss;
}
int main(){
    vector<int> nums = {2,0,5,4,9,8,6,7,3};
    int missdigit = MissingDigit(nums);
    cout << missdigit << endl;
    return 0;
}
