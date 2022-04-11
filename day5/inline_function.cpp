// Here we will learn Inline Function
#include<iostream>
using namespace std;
//these are inline functions
inline float mul(float x,float y){
    return x*y;
}
inline double div(double p,double q){
    return (p/q);
}
int main(){
    float a=12.34;
    float b=9.89;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
}