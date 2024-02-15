#include<iostream>
using namespace std;

int main(){
    int n , fact = 1;
    cin>>n;
    

    for(; n >=1 ; n--){
        fact = fact*(n);

    }
    cout<<fact<<endl;
    return 0;
    
}