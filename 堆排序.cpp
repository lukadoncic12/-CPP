#include<iostream>
#include<algorithm> //包含swap（）

//堆排序（大根堆）
using namespace std;

//调整当前节点
//可能不满足大根堆性质的，只有头部一个结点
void HeadAdjust(int len, int k, int a[]){
    a[0] = a[k];
    for(int i = 2*k; i<=len ;i = i*2){  //a[0]不取，能取到a[len]
        if(i<=len-1 && a[i]<a[i+1]){
            i++;
        }
        if(a[i]<=a[0]){ //当前节点满足则直接break
            break;
        }else{
            a[k] = a[i];
            k = i;  //当前节点不满足则k=i,(for循环中)i = i*2,将小值继续往下传递
        }
    }
    a[k] = a[0];

}
//建立大根堆
void BuildMaxHeap(int len, int a[]){
    for(int i = len/2; i > 0; i--){  //注意此处从i = len/2 开始（其他的都是叶子节点）
        HeadAdjust(len,i,a);  //数组做实参时不用写【】
    }
}

//堆排序
void HeapSort(int len, int a[]){
    BuildMaxHeap(len, a);
    for(int i = len ;i > 1; i--){  //n-1次循环
        swap(a[i], a[1]); //最大的放到最后所以大根堆排序得到的是从小到大的序列
        HeadAdjust(i-1, 1, a);
    }

}


int main(){
    int a[10] = {0,5,8,6,7,9,4,1,3,2}; //索引为0的空间不使用
    HeapSort(9,a); //实际根的长度为9

    for(auto const& num : a){
        cout << num << endl;
    }

    return 0;
}
