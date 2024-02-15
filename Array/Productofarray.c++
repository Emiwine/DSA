#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,59,60};
    int prod = 1;

    for(int i = 0;i<5;i++){
        prod = prod + arr[i];
    }
    cout<<"Product of an array is  = "<<prod<<endl;
}