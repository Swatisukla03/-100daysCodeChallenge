// Here we are going to debugg the errors
// #include<iostream>
// using namespace std;
// int fun(){
//     return 1;
// }
// float fun(){
//     return 10.23;
// }
// void main(){
//     cout<<(int)fun<<endl;
//     cout<<(float)fun<<endl;
// }

//Errror * we cann't declare the function wiy=th same name more than one time (shows ambiguity in the code)



// #include<iostream>
// using namespace std;
// int gValue=10;
// void extra(){
//     cout<<gValue<<' ';
// }
// // ERROR *here main must return integer value
// void main(){
//     extra();
//     {
//         int getValue=20;
//         cout<<gValue<<' ';
//         cout<<gValue<<' ';
//     }
// }