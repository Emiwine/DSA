#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    
    // vector<pair<int, int>>vec;
    // v.push_back({1,3});  //here in push_back we have to declare the input in the curly brackets
    // v.emplace_back(2,3);//but in the emplace_back it automatically take the input as a pair in the parenthesis
    vector<int> v;
    for(int i=1; i<10; i++){
        v.push_back(i);
        cout<<i;
    }
    cout<<endl;
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it)<<" ";
    
    
}