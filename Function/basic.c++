#include<iostream>
using namespace std;

//function is a set of code which is something for you 
//It help to modularise(sepaerate a code) code 
//Increase readbility 
//Use same code in multiple time 

//main topic is used in function 
//void
//return 
//parameterised
//Non parametrised

void PrintName(string name){
    cout<<"hey" <<name<<endl;

}

int main(){
    string name;
    cin>>name;
    PrintName(name);
    


    string name2;
    cin>>name2;
    PrintName(name2);

    return 0;

}