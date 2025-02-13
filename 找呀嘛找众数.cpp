#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int find_zhongshu(int arr[] , int arr_size){

    int num_count[11] = {0}; // 如果初始化列表中的值少于数组大小，剩余的元素会自动初始化为0 ,这里的效果等效为所有元素初始化为0
    int max_count_index = 0; // 用于记录最大出现次数对应的索引,


    // max_count_index 表示众数的值



    int max_count = 0; // 用于记录最大出现次数
    int first_occurence[11] = {0};//记录数字第一次出现的位置

    for(int i = 0; i < 11 ;i++){
        first_occurence[i] = -1; //初始化为不可能的位置，如-1
    }

    //记录各数字出现次数,以及各数字第一次出现的位置
    for(int i = 0; i < arr_size ;i++){
        if(arr[i]>=0 && arr[i]<=10){ //确保有效范围为1-9，避免数组越界

            if(num_count[arr[i]] == 0){
                first_occurence[arr[i]] = i;
            }

        num_count[arr[i]] ++ ;
        }
    }

    //判断众数所在位置
    for(int i = 0; i < 11 ;i++){
        if(num_count[i] > max_count){
            max_count = num_count[i];
            max_count_index = i;

        }

        else if(num_count[i] == max_count){
            if(first_occurence[i] < first_occurence[max_count_index]){
                max_count_index = i;
            }
        }
    }

    return max_count_index;

}

int main(){
//    int arr[20];
//
//    //输入20个数字
//    for(int i = 0; i < 20 ;i++){
//        cout << "请输入第" << i+1 << "个数字" << endl;
//        cin >> arr[i];
//
//    }

    int arr[20] = {1,2,3,4,5,6,7,8,9,1,2,3,4,4,5,6,7,8,9,9};

    //判断众数
    int result = find_zhongshu(arr,20);
    cout << "众数是" << result << endl;

    return 0;
}
