#include<iostream>
#include<algorithm>


using namespace std;
struct BTree{

    int value;

    BTree* Lchild;
    BTree* Rchild;
    BTree(int x):value(x),Lchild(nullptr),Rchild(nullptr){}
};

//判断最大深度
int max_depth(BTree* root){

    if(root == nullptr){ //和nullptr比较的必须是指针，&root不是指针， BTree* root才是指针
        return 0;
    }


    return 1 + max(max_depth(root->Lchild),max_depth(root->Rchild)); //指针不能点（.） 要用箭头（->）
}


int main(){

    BTree* root = new BTree(1);
    root->Lchild = new BTree(2);
    root->Rchild = new BTree(3);
    cout << max_depth(root);
    return 0;
}
