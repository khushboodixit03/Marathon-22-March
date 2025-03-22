#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int roman(string s){
    int n = s.length();
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(mp[s[i]] < mp[s[i+1]])
        ans = ans - mp[s[i]];
        else ans = ans + mp[s[i]];
    }
    return ans;

}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

    cout<<roman(s);
}