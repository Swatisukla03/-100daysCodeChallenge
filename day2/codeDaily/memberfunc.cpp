#include<bits/stdc++.h>
using namespace std;
class Swati{
    public:
    string geekname;
    int id;
    void printname();
    void printid(){
        cout<<"Geek id is : "<<id;
    }
};
void Swati::printname(){
    cout<<"Geekname is :"<<geekname;
}
int main(){
    Swati s1;
    s1.geekname="Suklu";
    s1.id=12;

    //call printname()
    s1.printname();
    cout<<endl;

    s1.printid();
    return 0;
}