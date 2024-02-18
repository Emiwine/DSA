#include<iostream>
using namespace std;

int main(){
    char oper;
    cin>>oper;
    float n1 , n2;
    cout<<"Enter the two  number"<<endl;
    cin>>n1>>n2;

    switch (oper){
        case '+':
        cout<<n1 << " + " <<n2 << " = " << n1+n2<<endl;
        break;

        case '-':
        cout<<n1 << " - " << n2 << " = " <<n1-n2<<endl;
        break;

        case '*':
        cout<<n1 << " + " <<n2 << " = " <<n1*n2<<endl;
        break;


        case '/':
        cout<<n1 << " / " <<n2 << " = " <<n1/n2<<endl;
        break;

        default:
        cout<<"Error ! "<< endl;



    }
    return 0;

}