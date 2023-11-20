#include<iostream>
using namespace std;


void sayHello(string name){
         
    cout<<"Hello "<<name<<" Sir!";
    
}

string Yo(){
    return "hello there this is random function which is returning some text";

}
int main(){
    system("cls");
    string text;
    text = Yo();
    cout<<text;

    return 0;
}
