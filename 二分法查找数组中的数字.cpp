#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

//c++编译器从上往下编译，应在mian函数之前声明main函数要调用的函数的定义；
int search1(vector<int> &nums, int target);

int main(){

    int n = 5;
    vector<int> nums = {1,2,3,4,5};
    int target;

//    printf("输入 target \n");
//    scanf("%d",&target);  //scanf一定要&；

    cout << "输入 target \n";
    cin >> target;
    int result = search1(nums,target);

//    printf("%d 在数组nums中在第 %d 位\n",target,result);
    cout << target << "在数组nums中在第" << result << "位\n";
    return 0 ;
}
//vector动态数组，需要显式地传递 要用& ； 静态数组同c语言，依然不需要
//这里不用修改数组内容，即使不用& 问题也不大；
//二分法搜索，存在返回下标，不存在返回-1；
int search1(vector<int> &nums, int target){

    int low = 0;
    int high = nums.size()-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;

        if(nums[mid]== target){
            return mid;
        }
        else if(nums[mid] > target){
            high = mid-1;  //mid-1 而非 mid ，避免陷入无限循环
        }
        else if(nums[mid] < target){
            low = mid+1;
        }
    }

    return -1;
}
