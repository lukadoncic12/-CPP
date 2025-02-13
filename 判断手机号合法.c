#include<stdio.h> //头文件，保证代码在不同环境下的可移植性，<stdio.h>包含scanf和printf   代码改动之后要先bulid一遍才能运行新的代码
#include<string.h> //c++用<string>


int main(){
    //应该为 int ，但用char运行也没问题
    char c;
    printf("按回车键开始，按CTRL+Z结束");

    //while循环实现多次输入号码判断
    while(c = getchar() != EOF){ //回车键开始，按CTRL+Z结束  重复判断多次时使用
        char s[12];
        printf("输入号码： ");
        scanf("%s",s);  // 数组名就是数组首元素的地址，故不用&s

        if(strlen(s) != 11){
            printf("Length is illegal ！\n");
            continue;
        }

        int valid = 1;

        for(int i = 0; s[i]; i++){
            if(s[i]<'0' || s[i]>'9'){
                printf("号码包含非数字字符\n");
                valid = 0;
                break;
            }
        }

        if(s[0]!= '1'){
            printf("号码第一位不合法\n");
            valid = 0;
        }

        if(s[1]!='3' && s[1]!='4' && s[1]!='5' && s[1]!='7' && s[1]!='8'){
            printf("号码第二位不合法\n");
            valid = 0;
        }

        if(valid==1){
            printf("号码合法\n");
        }

    }


    return 0;
}
