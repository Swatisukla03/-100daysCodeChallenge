// objects as Arguments
#include<iostream>

using namespace std;
class time{
    int hours;
    int minute;
    public:
    void gettime(int h,int m){
        hours=h;
        minute=m;
    }
    void puttime(void){
        cout<<hours<<"Hours and"<<endl;
        cout<<minute<<"minutes"<<endl;

    }
    void sum(time,time);

};
void time::sum(time t1,time t2)
{
    minute=t1.minute+t2.minute;
    hours=minute/60;
    minute=minute%60;
    hours=hours+t1.hours+t2.hours;
}
int main(){
    time t1,t2,t3;
    t1.gettime(2,34);
    t2.gettime(3,37);
    t3.sum(t1,t2);
    cout<<"T1 = ";t1.puttime();
    cout<<"T2 =";t2.puttime();
    cout<<"T3 =";t3.puttime();
    return 0;
}