#include<bits/stdc++.h>
using namespace std;


int sum(int num1 , int num2){
    int num3 = num1 + num2;  //now here it take the value 
    return num3; //and here it return the value 
}





int main(){
    int num1 , num2;
    cin>>num1>>num2;
    int stop = sum(num1 , num2);  // program is stop here and it will go in int sum function  and check the condition  
    cout<<stop<<endl;


    

    return 0;

    
}