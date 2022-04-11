// Here we are discussing the Array Object
#include<iostream>
using namespace std;
class employee{
    char name[30];
    float age;
    public:
    void getData(void);
    void putData(void);
};
void employee::getData(void){
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter age: ";
}
void employee::putData(void){
    cout<<"Name"<<name<<endl;
    cout<<"Age :"<<age<<endl;
}
const int size=3;
int main(){
    employee manager[size];
    for(int i=0;i<size;i++){
        cout<<"Detalis of a Manager"<<endl;
        manager[i].getData();
    }
    cout<<endl;
    for( int i=0;i<size;i++){
        cout<<"Manager "<<i+1<<endl;
        manager[i].putData();

    }
    return 0;
}