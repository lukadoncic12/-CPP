#include<iostream>
#include<vector>
#define MAX_SIZE 50

//模拟顺序栈
using namespace std;

typedef struct stack_demo{
    char arr[MAX_SIZE];
    int top = -1;
}stack_demo;

void push(stack_demo &st, char ch){
    if(st.top == MAX_SIZE -1){
        cout << "栈已经满了" << endl;
    }else{
        st.top ++;
        st.arr[st.top] = ch;
    }
}

void pop(stack_demo &st, char &ch){
    if(st.top == -1){
        cout << "栈已经空了" << endl;
    }else{
        ch = st.arr[st.top];
        st.top--;
    }
}


int main(){
    stack_demo stack_luka;
    push(stack_luka,'a');
    push(stack_luka,'b');
    push(stack_luka,'c');
    push(stack_luka,'d');

    char result[5];
    for(int i = 0; i< 5; i++){
        pop(stack_luka,result[i]);
        cout << result[i] << endl;
    }
    return 0;
}
