#include<iostream>
#include<limits.h>
using namespace std;

int main(){
      int arr[] = {1,3,56,8,0,12,4};
      int mx = INT_MIN;
      int smx = INT_MIN;
      for(int i = 0;i<=7;i++){
        if(mx<arr[i]) {
            mx = arr[i];
        }
      }

      for(int i = 0;i<=7;i++){
        if(smx<arr[i] && arr[i] != mx){
            smx = arr[i];
        }
      }
      cout<<smx<<endl;

}