#include<iostream>
#include<vector>

using namespace std;
//循环输入任意个数元素


int main(){

    //输入模板1
     vector<int> arr;
    int num;
    while(true){
        cin >> num;
        if(num == 9999){
            break;            //输入元素之间以任意空白字符分隔
        }
        arr.push_back(num);
    }

    for( int num : arr){
        cout << num << endl;
    }



    //输入模板2
    vector<int> arr2;
    int num2;
    do{
        cin >> num2;
        arr2.push_back(num2);
    }while(getchar()!= '\n');   //输入的元素之间以空格分隔

    for( int num : arr2){
        cout << num << endl;
    }

    return 0;
}
