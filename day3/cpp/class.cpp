#include<iostream>
using namespace std;
class item{
    int number; //by default these are private
    float cost; // these are private
    public:
    void getdata(int a,float b);
    void putdata(void){
        cout<<"number :"<<number<<endl;
        cout<<"cost :"<<cost<<endl;
    }
};
void item::getdata(int a,float b){
    number=a;
    cost=b;
}
int main(){
    item x;  //object of the item class
    cout<<"object x"<<endl;
    x.getdata(100,299.5);
    x.putdata();

    item y; //object 2 of the same class sharing same attribute
    cout<<"object y"<<endl;
    y.getdata(34.4,108.9);
    y.putdata();
}
