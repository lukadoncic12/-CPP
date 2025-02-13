#include<iostream>
#include<algorithm>


using namespace std;
struct BTree{

    int value;

    BTree* Lchild;
    BTree* Rchild;
};

//判断最大深度
int max_depth(BTree* root){

    if(root == NULL){ //和null比较的必须是指针，&root不是指针， BTree* root才是指针
        return 0;
    }

    return max(max_depth(root->Lchild),max_depth(root->Rchild)); //指针不能点（.） 要用箭头（->）
}


int main(){

    BTree* tree_example;
    max_depth(tree_example);
    return 0;
}
