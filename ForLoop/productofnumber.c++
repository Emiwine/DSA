#include<iostream>
using namespace std;

int main(){
    int n , mul = 1;
    cin>>n;

    for(;n>0;n=n/10){
        mul=(mul)*(n%10);

    }
    cout<<mul<<endl;
    return 0;

}