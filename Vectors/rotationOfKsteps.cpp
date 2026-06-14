#include<iostream>
#include<vector>
using namespace std;
void partReverse(vector<int>& v, int begin , int end){
    while(begin <= end){
        int temp = v[begin];
        v[begin] = v[end];
        v[end] = temp;
        begin++;
        end--;
    }
    return;
}
void display(vector<int>& vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of vector: ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter k steps about which vector is to be rotated: ";
    cin>>k;
    k = k%(v.size());
    partReverse(v,0,v.size()-1);
    partReverse(v,0,k-1);
    partReverse(v,k,v.size()-1);
    display(v);
}