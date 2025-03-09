#include<iostream>
#include<vector>
//最大子字符串连续和（动态规划）
//自底向上的思想
using namespace std;
int max_i(vector<int> arr, int i){
    int maxl_i;
    if(i == arr.size()-1){
       maxl_i = arr[i];
    }else{
    int length_i = max_i(arr,i+1)+arr[i];
    maxl_i = max(length_i,arr[i]);
    }

    return maxl_i;
}

int main(){
    vector<int> arr = {3,-4,2,-1,2,6,-5,4};

    int result = 0;
    for(int i = arr.size()-1; i>=0; i--){
        int temp = max_i(arr,i);
        result = max(temp,result);
    }

    cout << result;

    return 0;
}
