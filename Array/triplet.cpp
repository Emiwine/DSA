#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a[] = {3,1,2,4,0,6};
    int targetsum = 6;
    int size = 6;

    int counttriplet = 0;

    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            for (int k = j+1;k<size;k++){
                if(a[i] + a[j] + a[k] == targetsum){
                    counttriplet++;
                }
            }
        }
    }
    cout<<endl<< "Enter count the Triplet = "<<counttriplet<<endl;
}