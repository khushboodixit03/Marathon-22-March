#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
char character(string s){
    int n = s.length();
    unordered_map<char,int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    for(auto x : mp){
        if(x.second == 1)
        return x.first;
    }

}
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
     
    cout<<character(s);
}