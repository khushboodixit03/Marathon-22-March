#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> duplicates(vector<int>& v){
    int n = v.size();
    sort(v.begin(), v.end());
    vector<int> ans;
    for(int i = 0; i < n-1; i++){
        if(v[i] == v[i+1]) ans.push_back(v[i]);
    }
    return ans;

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

    vector<int> ans  = duplicates(v);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}