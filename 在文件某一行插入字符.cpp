#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

bool insert_char_in_file(string filename,int line_num, int pos, char ch){

    vector<string> Lines;
    ifstream infile(filename);
    string str;

    //判断文件成功打开
    if(!infile.is_open()){
        cerr << "文件无法打开！" << endl;
        return false;
    }

    //逐行读取文件
    while(getline(infile,str)){
        Lines.push_back(str);
    }

    infile.close();

    // 检查行号和位置是否合法
    if (line_num < 1 || line_num > Lines.size()) {
        cerr << "行号超出范围！" << endl;
        return false;
    }
    if (pos < 0 || pos > Lines[line_num - 1].size()) {
        cerr << "位置超出范围！" << endl;
        return false;
    }


    //在指定行指定位置插入字符
    string& target_line = Lines[line_num -1]; //引用，修改原对象
    target_line.insert(pos,1,ch);  // 1 表示插入字符的重复次数，这里表示只插入一次

    //打开输出文件
    ofstream outfile(filename);
    if(!outfile.is_open()){
        cerr << "文件无法打开！" << endl;
        return false;
    }

    //逐行写回文件
    for(const auto &l : Lines){ //引用，避免冗余拷贝
        outfile << l << endl;
    }

    cout << "插入成功！" << endl;
    return true;
}

int get_pos(){

    cin.ignore(99999,'\n'); //清除输入流的剩余内容
    int index1;
    while(true){
        cout << "输入要插入的位置" <<endl;
        if(cin >> index1){
            break;
        }
        else{
            cout << "输入有误，请输入一个整数" << endl;
            cin.clear(); //清除cin的错误标志信息
            cin.ignore(99999,'\n'); //清除输入流的剩余内容
        }
    }
    return index1;
}

int main(){

    //输入一个字符
    char ch;
    cout << "输入一个字符" <<endl;
    cin >> ch;

    //输入要插入的位置
    int index = get_pos();

    //插入
    insert_char_in_file("report.txt",2,index,ch);

    return 0;
}
