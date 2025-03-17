#include<iostream>
#include<vector>

using namespace std;

vector<string> find_successive_3chars(string &str){
    int size_ = str.size();
    vector<string> result;
    if(size_ <= 2){  //字符串字符小于3个时直接退出
        return result;
    }

    string temp;

    for(int i = 0; i <= size_ - 3 ; i ++){
        temp = str[i];
        if(str[i+1] == str[i]+1 && str[i+2] == str[i] + 2){ //查找连续的三个字符
            temp += str[i+1];
            temp += str[i+2];
            result.push_back(temp);  //保存结果
        }
    }
    return result;

}

int main(){
    string str;
    cout << "请输入字符串" << endl;
    cin >> str;

    auto result = find_successive_3chars(str);
    //输出结果
    cout << "连续的三个字符有：" << endl;
    for(string chars: result){
        cout << chars << endl;
    }



    return 0;
}
