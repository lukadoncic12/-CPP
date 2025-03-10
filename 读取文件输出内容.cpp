#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

string output_string(ifstream &file){
    string result;
    string ch;
    while(getline(file,ch)){
        result += ch;
    }

    return result;
}

int main(){
    ifstream file("wordlist.txt");
    if(!file.is_open()){
        cerr << "文件无法打开" << endl;
        return 1;
    }

    string result = output_string(file);

    file.close();

    cout << result;

    return 0;
}
