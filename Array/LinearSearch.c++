#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,5,2,6,8,3,2,67,8};
    int x;
    cout<<"Enter the Element that we find in the array = ";
    cin>>x;
    for(int i = 0; i<10;i++){
        if(arr[i] == x){
            cout<<x<<" is the present in the array"<<endl;
            break;
        }
    }
}