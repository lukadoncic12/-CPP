#include <iostream>
#include <vector>   //动态数组
#include<algorithm> //让 std 标准库可以使用reverse（）
#include<cmath>  //包含了pow（）函数
using namespace std;

int main(){
    int c,n,t;
    int i = 0;
    int length;


        cout << "输入一个数字";
        cin >> n;

        //转为二进制, binary[]数组内存储的是二进制的逆序
        vector<int> binary;   //动态数组

        while(n > 0){
            binary.push_back( n % 2);
            n = n / 2;
        }

        //输出二进制数组内容
        length = binary.size();
        for(i = 0; i < length ; i++){
           cout << binary[i];
        }

        //std库中的reverse实现逆序
//        printf("\n");
//        reverse(binary.begin(),binary.end());
//
//        for(i = 0; i < length ; i++){
//           cout << binary[i];
//        }

        //转十进制
        int sum = 0;
        for(i = 0; i < length ; i++){
            sum += binary[length-i] * pow(i,2);
        }

        printf("result is %d\n",sum);





    return 0;
}
