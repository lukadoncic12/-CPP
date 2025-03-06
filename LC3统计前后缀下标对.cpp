#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool isPrefixandSuffix(string str1, string str2){
    bool flag = true;
    //判断是否为前缀
    for(int i = 0; i< str1.size(); i++){
        if(str1[i] != str2[i]){
            flag = false;
        }
    }

    //判断是否为后缀
    int j = 0;
    for(int i = str2.size()-str1.size(); i< str2.size(); i++){
        if(str1[j] != str2[i]){  //str1不能也用i
            flag = false;
        }
        j++;
    }

    return flag;
}
int main(){
    vector<string> words = {"a","aba","ababa","aa"};
    int size_ =words.size();
    //统计满足条件的组合的个数
    int count_ = 0;
    for(int i = 0 ; i < size_-1 ; i++){
        for(int j = i+1 ; j <size_; j++){
            if(isPrefixandSuffix(words[i], words[j])){
                count_++;
            }
        }
    }
    cout << count_ << endl;

    return 0;
}
