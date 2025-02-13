#include<iostream>
#include<ctime>

int main(){

    time_t now = time(0); //time_t是时间戳数据类型

    tm* localtm = localtime(& now);  //tm是专为时间定义的结构体 now要传引用

    std::cout << "现在时间是" << localtm->tm_hour << "点";
    return 0;
}
