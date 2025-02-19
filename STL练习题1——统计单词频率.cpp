#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<map>

using namespace std;
int main(){
    string s = "hello world hello";
    string s2;
    getline(cin,s2);
    map<string,int> frequence;
    istringstream iss(s2); //处理成以空格分割的标准字符串

    string word;

    //统计频率
    while(iss >> word){
        frequence[word] ++;
    }

    for( auto const& pair : frequence){
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}
