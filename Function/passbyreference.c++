#include<bits/stdc++.h>
using namespace std;


void dosomething(string &s){   //here it wil take the address of the original data   
    s[0] = 't';  // here it will modify the original data  
    cout<<s<<endl;

}

int main(){
    string s = "raj";
    dosomething(s);
    cout<<s<<endl;
    return 0;

}