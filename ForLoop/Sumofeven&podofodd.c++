#include<iostream>
using namespace std;

int main(){
    int n,sum = 0, mul = 1 , digit;
    cin>>n;

    for(;n>0;n=n/10){
        digit=n%10;
        
        if(digit%2==0){
            sum =sum+digit;
            
        }
        else{
            mul = mul*digit;
            
        }
    }
    cout<<sum<<endl;
    cout<<mul<<endl;
    return 0;
}