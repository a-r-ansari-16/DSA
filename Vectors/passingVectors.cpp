#include<iostream>
#include<vector>
using namespace std;
void change1(vector<int> a){
    a[0] = 100;      // pass by value 
}   
void change(vector<int>& a){
    a[0] = 100;      // pass by reference 
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    for(int i = 0;i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change1(v);
     for(int i = 0;i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i = 0;i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}