#include<iostream>

using namespace std;
int saveMoney(int day){
    int money = 0;
    //计算存款
    int i=0;
    while(true){
        for(int j = i+1; j<=i+7 ; j++){
            money += j;
            day--;
            if(day <= 0){break;}
        }
        if(day <= 0){break;}
        i++;
    }

    return money;
}

int main(){
    int day = 4;
    int money = saveMoney(day);
    cout << money << endl;
    return 0;
}
