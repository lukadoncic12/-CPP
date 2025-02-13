#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string str;
    cout << "输入字符串";
    cin >> str ;

    vector<char> vector_n;
    vector<char> vector_p;
    vector<char> vector_u;
    vector<char> vector_result;

    //对字符分组
    for(char ch : str){

        if(ch == 'n'){
            vector_n.push_back(ch);
        }
        if(ch == 'p'){
            vector_p.push_back(ch);
        }
        if(ch == 'u'){
            vector_u.push_back(ch);
        }

    }

    int max_vector_size = max(vector_n.size(),max(vector_p.size() , vector_u.size()));

    //按顺序组装
    for(int i = 0 ;i < max_vector_size ; i++){

        if(i <= vector_n.size() - 1){   // 如果还有字母n
            vector_result.push_back(vector_n[i]);
        }

        if(i <= vector_p.size() - 1){
            vector_result.push_back(vector_p[i]);
        }

        if(i <= vector_u.size() - 1){
            vector_result.push_back(vector_u[i]);
        }

    }

    //将结果转成字符串
    string result(vector_result.data(), vector_result.size());

    cout << result << endl;

    return 0;
}
