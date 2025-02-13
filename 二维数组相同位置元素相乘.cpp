#include<iostream>

using namespace std;

int main(){

    int arr_a[4][4];
    int arr_b[4][4];
    int arr_result[4][4];

    int i,j,k;

    //输入数组A
    cout << "请输入数组A" << endl;
    for(i = 0 ; i < 4 ; i ++){
        for(j = 0 ; j < 4 ; j ++){
            cout << "请输入A【" << i+1 << "】【" << j+1 << "】" << endl;
            cin >> arr_a[i][j];
        }
    }

    //输入数组B
    cout << "请输入数组A" << endl;
    for(i = 0 ; i < 4 ; i ++){
        for(j = 0 ; j < 4 ; j ++){
            cout << "请输入B【" << i+1 << "】【" << j+1 << "】" << endl;
            cin >> arr_b[i][j];
        }
    }

    //数组相同位置元素相乘
    for(i = 0 ; i < 4 ; i ++){
        for(j = 0 ; j < 4 ; j ++){
            arr_result[i][j] = arr_a[i][j] * arr_b[i][j];
        }
    }

    //输出result数组
    for(i = 0 ; i < 4 ; i ++){
            cout << endl;
        for(j = 0 ; j < 4 ; j ++){
            cout << arr_result[i][j] << "   " ;
        }
    }






    return 0;
}
