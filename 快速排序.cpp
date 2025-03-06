#include<iostream>
//快速排序
using namespace std;

int Partition_(int arr[], int low, int high){
    int pivot = arr[low];
    while(low < high){  // low==high时循环应该结束
        while(low < high && pivot <= arr[high]){ high--;};
        arr[low] = arr[high];

        while(low < high && pivot >= arr[low]){low++;};
        arr[high] = arr[low];

    }
    arr[low] = pivot;
    return low;
}

bool QuickSort(int arr[], int low, int high){
    if(low < high){
        int partition_position = Partition_(arr,low,high);
        QuickSort(arr,low,partition_position-1);
        QuickSort(arr,partition_position+1, high);

    }

    return true;
}

int main(){
    int arr[] = {3,1,5,2,2,3,9,5,3,8};
    int size_ = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, size_-1);
    for(int i = 0; i < size_; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
