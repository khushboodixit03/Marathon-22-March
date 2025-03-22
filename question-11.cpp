#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void palindrome(string s){
    int n = s.length();
    int vowels = 0;
    int consonant = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u')
        vowels++;
        else consonant++;
    }
    cout<<vowels<<" "<<consonant;
    
}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    palindrome(s);
}