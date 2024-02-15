#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,3,5,3,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    char vowels[5];
    for(char &element:vowels){
        cin>>element;
    }
    for(int i = 0;i<5;i++){
        cout<<vowels[i];
    }

    // // for loop that traversing the array
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }

    // //for each loop that traversing the array
    // for(int element: arr){
    //     cout<<element;
    // }
    // cout<<endl;

    // //While loop that traversing the array
    // int index = 0;
    // while(index<n){
    //     cout<<arr[index];
    //     index++;
    // }
    // int arr[5];
    // arr[0] = 7;
    // arr[1] = 6;
    // arr[2] = 1;
    // arr[3] = 3;
    // arr[4] = 0;
    // cout<<arr[0]<<endl;
    // arr[0] = 90;
    // cout<<arr[0];
}