#include<iostream>
using namespace std;

int main(){
    int i, rev = 0 , orig;
    cin>>i;

    orig = i;
    

    for(; i>0 ; i = i/10){
        rev = (rev*(10)) + i%10;

    }
    if(orig == rev){
        cout<<"Number is Palindrome "<<endl;
    }
    else{
        cout<<"Number is not a Palindrome" <<endl;

    }
    return 0;
}