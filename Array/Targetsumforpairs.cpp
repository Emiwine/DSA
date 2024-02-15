#include<iostream>
using namespace std;

int main(){
    int a[] = {3,4,6,7,1};
    int size = 5;
    int targetsum = 5;
    int countpair = 0;
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(a[i] + a[j] == targetsum){
                countpair = countpair + 1;
            }
        }
    }
    cout<<countpair<<endl;
}