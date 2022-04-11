// Class Implementation
#include<iostream>
using namespace std;
class item{
    int number;  // by default privatwe
    float cost;
    public:
    void getData(int a,float b);
        void putdata(void){
            cout<<"number :"<<number<<endl;
            cout<< "cost  :"<<cost<<endl;


        }
        

        
    };
    void item::getData(int a,float b){
        number=a; //accessing the private elements
        cost=b;

    }
    int main(){
        item x;
        cout<<"Object x"<<endl;
        x.getData(100,123.18);
        x.putdata();


        item y;
        cout<<"Object y"<<endl;
        y.getData(123,145.89);
        y.putdata();
        return 0;

    }
