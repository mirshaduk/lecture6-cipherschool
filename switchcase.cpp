#include<iostream>
using namespace std;
int main()

{
    int a;
    cout<<"enter a integer a";
    cin>>a;
    switch(a)
    {
       case 1:
       cout<<"the value of a is one"<<endl;
       break;
       case 2:
       cout<<"the value of a is 2"<<endl;
       break;
       case 3:
       cout<<"the value of a is 3"<<endl;
       
       
       default :
       cout<<"default will be always printed";
       break;
           }
}