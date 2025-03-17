#include<iostream>
#include<vector>

using namespace std;

void insert_order(vector<int> &arr){

    for(int i = 0; i < arr.size(); i++){
        int temp = arr[i]; //暂存当前待插入值
        int j = i - 1;
        while(j >= 0){ //依次与前面的数比较
            if(temp < arr[j]){  //不能使用arr[i] < arr[j] 因为在排序过程中，arr[i]会被覆盖
                arr[j+1] = arr[j]; //前面的数若比待插入数更大则往后挪一位
                j--;
            }else{
                break;
            }
        }
        arr[j+1] = temp; //插入到最终位置
    }
}

int main(){
    vector<int> arr;
    int num;
    int ch;
    do{
        cin >> num;
        arr.push_back(num);
    }while((ch =  getchar())!='\n');

    //插入排序
    insert_order(arr);

    //输出
    for(int num:arr){
        cout << num << " ";
    }
    return 0;
}
