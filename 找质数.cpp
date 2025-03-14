#include<iostream>
#include<vector>
#include<math.h>
#define MAX 50
using namespace std;
//找质数
int main(){
    int arr[MAX] = {1}; //定义了第一位为1，后面的全为0；避免了脏数据。只要定义了一位，后面的都不脏了
    int i = 0;
    while(i < 10){
        cin >> arr[i];
        i++;
    }
    cout << "输入完成" << endl;
    i = 0;
    bool flag[MAX] = {false}; //bool默认定义为flase，就像int默认定义为0

    while(i < 10){
        for(int j = 1; j <= sqrt(arr[i]); j++ ){
            if(j == 1){
                continue;
            }
            if(arr[i]%j == 0){
                flag[i] = true;  //对质数的位置进行标记
            }
        }
        i++;
    }

    for( i = 0; i < 10 ; i++){
        if(flag[i]){
            cout << arr[i] << "  ";
        }
    }
    return 0;
}
