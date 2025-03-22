#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagram(string s, string t){
    int n = s.length();
    int m = t.length();

    sort(s.begin(), s.end());

    sort(t.begin(), t.end());

        if(s == t) return true;
        return false;
}
int main(){
    string s;
    cout<<"enter string s: ";
    cin>>s;

    string t;
    cout<<"enter string t: ";
    cin>>t;

    cout<<anagram(s,t);
}