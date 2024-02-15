#include<iostream>
using namespace std;

int main(){
    
    int arr[] = { 10,20,40,50,90};
    int sum = 0;

    for(int i = 0;i<5;i++){
        sum = sum + arr[i];

    }
    cout<<"Sum of the array =  "<<sum<<endl;
}