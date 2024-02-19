#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    //do not use this for inserting the elements  
    //v[3] = 4002;  // Array has 2 index and these two are out of the array  v3 and v4 are the out of the index of an array 
    //v[4] = 5002;
    v.push_back(23);
    v.push_back(2442);

    //for deleting the element we use pop_back 
    v.pop_back();



    for(int i = 0; i<v.size() ;i++){
        cout<<v[i]<<endl;
    }

    /*cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;

    cout<<"Size = "<<v.size()<<endl;

    cout<<v.at(3)<<endl;
    cout<<v.at(4)<<endl;
    */
}