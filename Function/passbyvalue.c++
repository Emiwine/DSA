#include<bits/stdc++.h>
using namespace std;

//Pass by value means you send the data in a function , basically you copy the data not take the original data and if you modify the data in functioin then there is no impact the data 


void dosomething(int n){
    cout<<n<<endl;
    n += 5;
    cout<<n<<endl;
    n+= 5;
    cout<<n<<endl;

}



int main(){
    int n = 10 ;
    dosomething(n) ; 
    cout<<n<<endl;  //here it will only print the original data in it 
    

}

string dosomething(string s){
    s[0] = 't';
    cout<<s<<endl;

}




int main(){
    string  s = "raj";
    dosomething(s);
    cout<<s<<endl;


}