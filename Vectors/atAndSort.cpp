#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(6);
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" "; // for accessing the values of the vectors
    }
    v.at(3) = 10; // for updating value 
    cout<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}