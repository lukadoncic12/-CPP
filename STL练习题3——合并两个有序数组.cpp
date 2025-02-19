#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
//合并两个有序数组
int main(){
    int nums_a[] = {1,3};
    int nums_b[] = {2,3,4,5,8,9};
    vector<int> result;

    //定义两个指针
    int pointer_a = 0;
    int pointer_b = 0;

    //静态数组这样求size
    int size_a = sizeof(nums_a)/sizeof(nums_a[0]);
    int size_b = sizeof(nums_b)/sizeof(nums_b[0]);

    //合并
    while(pointer_a< size_a && pointer_b < size_b){   //索引范围是0~size-1，判断条件不能写<=
        if(nums_a[pointer_a] <= nums_b[pointer_b]){
            result.push_back(nums_a[pointer_a]);
            pointer_a++;
        }else{
            result.push_back(nums_b[pointer_b]);
            pointer_b++;
        }
    }

    //处理有剩余的数组
    if(pointer_a < size_a){
        while(pointer_a < size_a){
            result.push_back(nums_a[pointer_a]);
            pointer_a++;
        }
    }else{
        while(pointer_b < size_b){
            result.push_back(nums_b[pointer_b]);
            pointer_b++;
        }
    }

    //输出结果
    for(auto const& num : result){
        cout << num << " ";
    }


    return 0;
}
