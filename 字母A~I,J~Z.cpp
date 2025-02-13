#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using namespace std;
int main(){


    //循环输入处理
    while(true){
    string str;
    cout << "输入字符(输入空行结束)" << endl;
  //  cin >> str 不行 ，因为cin >> str会自动忽略空行
    getline(cin,str);

    //空行退出循环
    if(str.empty()){
        break;
    }

    vector<char> result;

    for(char ch : str){
        //删除数字
        if(isalpha(ch)){
            cout << "此字符属于字母" << endl;
            //小写字母改成大写
            if(islower(ch)){
                ch = toupper(ch);
            }
            result.push_back(ch);
        }
        //字母在A~I 或a~i
        if(('A'<=ch && ch<= 'I') || ('a'<=ch&&ch<= 'i')){  //c++不能写连等
            cout << "字母在A~I" << endl;
        }
        //字母在J~Z 或 j~z
        if(('J'<=ch&&ch<= 'Z') || ('j'<=ch&&ch<= 'z')){
            cout << "字母在J~Z" << endl;
        }
    }

    //输出处理后的结果
    //vector转换成string
    string result_str(result.data(),result.size());
    cout << result_str << endl;
    }

    return 0;
}
