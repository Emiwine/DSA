#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,56,8,3,8,0,12,4,3};
    int mx = arr[0];
    for(int i = 1;i<11;i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    cout<<mx;
}