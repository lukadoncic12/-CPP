#include<iostream>
#include<string>

using namespace std;
int fstr_count( string &str, string &fstr){
    int count_ = 0; //记录次数
    int i = 0; //主字符串的循环变量
    int j = 0; //待查字符串的循环变量

    //C++中，i，j必须分开定义，不能int i，j = 0； 会产生错误；

    while(i <= ( str.size()-fstr.size() )){ //保证主字符串不越界
        for(j = 0; j < fstr.size(); j++){   //逐位比较
            if(str[i+j] != fstr[j]){break;} //不满足则从下一位置从新开始
            if(j == fstr.size() -1 ){count_++;} //满足则count加1
        }
        i++;
    }
    return count_;
}
int main(){
    string str;
    string fstr;
    cout << "输入主字符串" << endl;
    cin >> str;
    cout << "输入待查字符串" << endl;
    cin >> fstr;
    int count_ = fstr_count(str,fstr);
    cout << fstr << " 在 " << str << " 中出现了 " << count_ << " 次" <<endl;
    return 0;
}
