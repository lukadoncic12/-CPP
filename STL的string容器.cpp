#include<iostream>
#include<string>
#include<vector>
#include<algorithm> //包含标准库函数find（）

using namespace std;

int main(){

    // 1. 初始化string
    string str1 = "hello world!"; //直接初始化

    string str2(str1,0,5); //取str1的子字符串初始化，从第0个字串开始，取5个字符

    vector<char> vec = {'1','2'};
    string str3(vec.begin(),vec.end());  //将vector<char>转换成string


    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;


    // 2.字符串拼接,用+和+=
    string str4 = str1 + " " + str3;
    cout << str4 << endl;


    // 3.字符串比较
    string str5 = "apple";
    string str6 = "banana";
    string str7 = "apple";

    if(str5 == str7){
        cout <<str5 <<" and "<<str7<< " are equal" << endl;
    }

    if(str5 < str6){
        cout <<str5 << " is less than "<< str6<<endl; //逐个字符比较
    }


    // 4.字符串查找和替换
    string str8 = "hello world!";

    //标准库函数的find只能找单个字符
    auto it = find(str8.begin(),str8.end(),'h');
    cout << *it << endl;

    //string的成员函数find（）和replace（）可以查找和替换字串
    size_t pos = str8.find("hello"); //size_t表示无符号整数，常用于表示size、index等
    if(pos != string ::npos){    //string::npos与成员函数find（）搭配，表示未找到目标
        cout << "hello is found at " << pos <<endl;  //pos = 0
        str8.replace(pos,5,"HELLO"); //替换字符串
        cout << "modified string is " << str8 << endl;
    }



    // 5.遍历字符串
    //用下标
    for(int i = 0;i<str8.size(); i++){
        cout << str8[i];
    }
    cout << endl;


    //用迭代器
    for(auto it = str8.begin(); it <= str8.end() ; it++){
        cout << *it;
    }
    cout << endl;


    //for循环
    for(char ch:str8){
        cout << ch;
    }
    cout << endl;



    // 6.string自带size()、empty()等成员函数
    cout <<"size of "<< str8 << " is " << str8.size() << endl;


    // 7.字符串本质是char动态数组，支持动态修改
    string str9 = "hello world!";
    str9.push_back('A'); //只能插入单个字符
    cout << str9 << endl;
    str9.pop_back(); //删除末尾字符
    cout <<str9 << endl;


    // 8.快速获取子串
    //使用成员方法substr（）
    string str10 = "hello world!";
    string sub_str10 = str10.substr(6,5);//从第6个位置开始，读5个字符
    cout << str10 << "'s substr is " << sub_str10 <<endl;


    return 0;
}
