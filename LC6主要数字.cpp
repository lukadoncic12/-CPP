#include<iostream>
#include<map>

using namespace std;

int OverHalf(int arr[], int size_){
    int key = -1;
    map<int,int> frequency;
    //统计频率
    for(int i = 0; i< size_ ;i++){
        frequency[arr[i]]++;
    }
    for(auto const& pair : frequency){
        if(pair.second > size_/2){ //如果超过半数
            key = pair.first;
        }
    }
    return key;
}
int main(){
    int arr[] = {1,2,5,9,5,9,5,5,5};
    int size_ = sizeof(arr)/sizeof(arr[0]);
    int key = OverHalf(arr,size_);
    cout << key << endl;
    return 0;
}
