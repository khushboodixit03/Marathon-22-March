#include<iostream>
using namespace std;
void pari(int n){
    if(n == 0){
        return;
    }
        cout<<n;
        pari(n-1);
    }
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    

    pari(n);
}