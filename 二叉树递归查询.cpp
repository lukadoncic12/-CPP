#include<iostream>

using namespace std;

typedef struct TreeNode{
    int data;
    struct TreeNode* lchild;
    struct TreeNode* rchild;
    //构造函数
    TreeNode(int x) : data(x),lchild(nullptr),rchild(nullptr){};
};

//构造一棵二叉树
TreeNode* CreateBinaryTree(){
    TreeNode* root = new TreeNode(1);
    root->lchild = new TreeNode(2);
    root->rchild = new TreeNode(3);
    root->lchild->lchild = new TreeNode(4);
    root->lchild->rchild = new TreeNode(5);
    root->rchild->lchild = new TreeNode(6);
    root->rchild->rchild = new TreeNode(7);

    return root;
}

//先序遍历
bool PreOrder(TreeNode* root){
    if(root != nullptr){
        cout << root->data <<endl;
        PreOrder(root->lchild);
        PreOrder(root->rchild);
    }

    return true;
}



int main(){

    TreeNode* btree = CreateBinaryTree();
    PreOrder(btree);

    return 0;
}


