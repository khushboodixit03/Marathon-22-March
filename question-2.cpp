#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missing(vector<int>& v){
    int n = v.size();
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(v[i] != i) return i;
    }

    return n;
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<missing(v);
}
