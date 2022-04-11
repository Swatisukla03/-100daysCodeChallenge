// Function Overloading
#include<iostream>
using namespace std;
int volumne(int);  //parameters are in int
double volumne(double,int); //parameters are in double and int
long volumne(long,int,int); //parameters are in long,int and int


//function defination
int volumne(int s){
    return (s*s*s);
}
double volumne(double r,int h){
    return(3.14*r*r*h);
}
long volumne(long l,int b,int h){
    return(l*b*h);
}
int main(){
    cout<<volumne(10)<<endl;
    cout<<volumne(2.5,5)<<endl;
    cout<<volumne(100L,45,78)<<endl;
    return 0;
}