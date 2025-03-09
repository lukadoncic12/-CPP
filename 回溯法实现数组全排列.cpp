#include<iostream>
#include<vector>

using namespace std;

void swap_(vector<int> &arr, int i ,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

//用引用传参，不用显式return
void backtrace(vector<int> &arr, int start, vector<vector<int>> &result){
    if(start == arr.size()){
        result.push_back(arr);  //保存叶子节点
        return;
    }
    //两次处理，一次backtrace（）
    for(int i = start; i < arr.size(); i++){
        swap_(arr, start, i); //交换
        backtrace(arr, start+1, result); //递归处理下一层节点
        swap_(arr, start, i); //恢复交换（回溯）
    }

}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<vector<int>> result;
    backtrace(arr, 0, result);
    // 输出所有排列
    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
