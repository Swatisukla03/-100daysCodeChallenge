//Static members are similar like stati variables
//-it is initialised from 0
//-only one copy is made and shared among al the objects of the class
//-it is only visible within the class
#include<iostream>
using namespace std;
class item{
    static int count;
    int number;
    public:
    void getdata(int a){
        number=a;
        count++;
    }
    void getcount(void){
        cout<<"count :";
        cout<<count<<endl;
    }

};
int item::count;
int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(23);
    b.getdata(19);
    c.getdata(12);
    cout<<"after reading the data"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}