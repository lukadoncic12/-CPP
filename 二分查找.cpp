#include<iostream>

using namespace std;
//二分查找
int  Binary_search(int arr[],int low,int high,int key){
    while(low <= high){
        int mid = (low+high)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            low = mid +1;
        }
        else if(key < arr[mid]){
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {3,1,5,2,2,3,9,5,3,8};
    int size_ = 10;
    int index = Binary_search(arr,0,9,4);
    cout << index;
    return 0;
}
