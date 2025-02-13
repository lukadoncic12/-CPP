#include<iostream>
#include<string>
#include<vector>
//先保存为.cpp文件,再关闭文件，打开文件，才会有智能提示；
using namespace std;

string find_digit(string &str){

    string result_str;
    for(char ch: str){  //字符串的循环
        if(isdigit(ch) || ch == '.'){
            result_str += ch; //字符串的添加字符
        }
    }

    return result_str;
}

int main(){

    //只能cin基本类型，cin字符串string时，空格会分割字符串
    string str;
    cin >> str;
    cout << "你输入的是"<<str<<endl;  //endl是换行符


    string result = find_digit(str);  //调用函数时，无需再对参数说明类型和引用；
    cout <<"数字部分是"<< result<< endl;

    return 0;

}
