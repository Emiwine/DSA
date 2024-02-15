#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year = " ;
    cin>>year;

    if(year%400 == 0){
        cout<<year <<"is a leap year"<<endl;

    }
    else if(year%100 == 0){
        cout<<year <<"is not a leap year"<<endl;

    }
    else if(year%4 == 0){
        cout<<year<<"is a leap year"<<endl;

    }

    else {
        cout<<"Not a Leap Year "<<endl;

    }
    return 0;  
}