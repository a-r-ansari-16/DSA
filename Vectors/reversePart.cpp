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
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int begin,end;
    cout<<"Enter the begining of array to be reversed: ";
    cin>>begin;
    cout<<"Enter the last element of array to be reversed: ";
    cin>>end;
    partReverse(v,begin,end);
    display(v);
}