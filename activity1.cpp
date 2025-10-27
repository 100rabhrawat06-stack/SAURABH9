//write a program to enter 3 peesons age and print the youngest person's age 
#include <iostream>
using namespace std;
int main(){
    int p1 , p2 , p3;
    cout<<"Enter Age of First Person";
    cin>>p1;
    cout<<"Enter Age of Second  Person";
    cin>>p2;
    cout<<"Enter Age of Third Person";
    cin>>p3;
    cout<<((p1<p3)?((p1<p2)?"person 1 is youngest":"person 2 is youngest"):((p3<p2)?"person 3 is youngest":"person 2 is youngest"));
}
