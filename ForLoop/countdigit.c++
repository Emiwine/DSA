#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , count , digit;
    cin>>n;

    count = 0;

    for(;n>0;n=n/10){
        digit = n%10;
        count++;
    }
    cout<<count<<endl;
    
}