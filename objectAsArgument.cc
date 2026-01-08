#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int minutes;
    public:

    void getTime(int h,int m){
        hours = h; minutes = m;
    }

    void putTime(void){
        cout<<hours<<" hours and ";
        cout<<minutes<<" minutes "<<endl;
    }

    void sum(time , time);
};

void time :: sum(time t1, time t2){
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours +t2.hours; 
}
int main(){
    time T1,T2,T3;
    T1.getTime(2,45);
    T2.getTime(3,30);

    T3.sum(T1,T2);
    cout<<"T1 = ";
    T1.putTime();
    cout<<"T2 = ";
    T2.putTime();
    cout<<"T3 = ";
    T3.putTime();
    return 0;
}