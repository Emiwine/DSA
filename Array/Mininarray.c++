#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,56,8,3,8,0,12,4,3};
    int mn = arr[0];
    for(int i = 1;i<11;i++){
        if(mn>arr[i]){
            mn = arr[i];
        }
    }
    cout<<mn;
}