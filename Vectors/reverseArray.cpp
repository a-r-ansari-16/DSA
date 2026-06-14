#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        int x; 
        cin>>x;
        v.push_back(x);
    }
    vector<int> b(v.size());
    for(int i = 0; i < b.size(); i++){
        b[i] = v[v.size()-i-1];
    }
    for(int i = 0 ; i < b.size(); i++){
        cout<<b[i]<<" ";
    }
}