#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool palindrome(string s){
    int n = s.length();
    int i = 0; 
    int j = n-1;
    while(i < j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;


}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    cout<<palindrome(s);
}