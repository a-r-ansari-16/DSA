#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention size 
    // for insertion use push back 
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    // you can use [] if you want to display or access element;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" "<<endl;
    cout<<v.size()<<endl; // size of vector
    cout<<v.capacity()<<endl; // capacity of the vector 
}