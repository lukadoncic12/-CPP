#include<iostream>
#include<vector>
//最大子字符串连续和（动态规划）
//自底向上的思想
//使用dp【】保存各节点的局部最大，避免重复调用和计算
using namespace std;
void max_i(vector<int> arr, int i, int dp[]){
    int maxl_i;
    if(i == arr.size()-1){
       dp[i] = arr[i];
    }else{

    dp[i] = max(dp[i+1]+arr[i],arr[i]);
    }

}

int main(){
    vector<int> arr = {3,-4,2,-1,2,6,-5,4};

    int result = 0;
    int dp[20] = {0}; //初始化成{0}，避免出现藏数据
    for(int i = arr.size()-1; i>=0; i--){
        max_i(arr,i,dp);
        for(int i = 0; i < arr.size() ;i++){
            result = max(result,dp[i]);
        }
    }

    cout << result;

    return 0;
}

