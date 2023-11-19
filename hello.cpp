#include<iostream>
#include<stdlib.h>
using namespace std;


void sayHello(string name){
    
    cout<<"hello "<<name<<endl;
}
int main(){
   
   system("cls");

    string yourname;
    cout<<"Enter your name : ";
    cin>>yourname;

   sayHello(yourname);
  



    return 0;
}