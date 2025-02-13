#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;
int main(){

    ifstream file("student.txt");

    if(!file.is_open()){
        cerr << "文件无法打开" << endl;
        return 1; //返回错误代码1
    }

    string ch;
    string name;
    int score;
    double score_sum = 0;
    int max_score = 0 ,min_score = 100;
    string max_score_stu , min_score_stu;
    int stu_sum = 0; //记录学生人数


    //逐行读取文件
    while(getline(file,ch)){
        //以空格分割姓名和成绩
        istringstream iss(ch);
        iss >> name >> score;

        //记录学生人数
        stu_sum ++;

        //计算所有学生总分
        score_sum += score;

        //找最高得分
        if(score > max_score){
            max_score = score;
            max_score_stu = name;
        }

        //找最低得分
        if(score < min_score){
            min_score = score;
            min_score_stu = name;
        }
    }
    file.close();

    //计算平均分
    double avg_score = score_sum / stu_sum ;


    //打开输出文件
    ofstream output_file("report.txt");

    if(!output_file.is_open()){
        cerr << "文件无法打开" << endl;
        return 1;//返回错误代码1
    }

    //写入内容
    output_file << "平均成绩  " << avg_score <<endl;
    output_file << "最高分  " << max_score_stu <<"  " << max_score <<endl;
    output_file << "最低分  " << min_score_stu <<"  " << min_score <<endl;

    output_file.close();

    return 0;
}
