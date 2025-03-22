#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int index(string hay, string ned){
    int i = hay.find_first_of(ned);
    return i;
}
int main(){
    string hay;
    cout<<"enter hay: ";
    cin>>hay;

    string ned;
    cout<<"enter ned: ";
    cin>>ned;

    cout<<index(hay,ned);
}