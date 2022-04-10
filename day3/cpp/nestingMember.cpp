// Nesting of the Member Functions
#include<iostream>
using namespace std;
class set{
    int m,n;  //class members
    public:
    void input(void);   // class function
    void display(void);
    int largest(void);

};
int set::largest(void){
    if(m>=n)
    return m;
    else
       return n;
}
void set::input(void){
    cout<<"Input values of m and n :";
    cin>>m>>n;

}
void set::display(void){
    cout<<"Largest value ="<<largest()<<endl;



}
int main(){
    set s1;
    s1.input();
    s1.display();
    return 0;

}