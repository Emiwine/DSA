#include<iostream>
using namespace std;

int main(){
    char n;
    cout<<"Enter the input"<<endl;
    cin>>n;

    bool isVowel = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
                   n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U');

    if (isVowel) {
        cout << n << " is a vowel." << endl;
    } else {
        cout << n << " is a consonant." << endl;
    }

    return 0;
}
