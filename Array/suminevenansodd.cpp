#include<iostream>

using namespace std;
int main(){
    int arr[] = {1,2,1,2,1,2};

    int sum = 0;
    for(int i = 0;i<6;i++){
        if(i%2 == 0){
            sum = sum + arr[i];
        }
        else{
            sum = sum - arr[i];
        }
        
    }
    cout<<sum<<endl;
}