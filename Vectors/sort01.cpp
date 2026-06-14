#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int noo = 0;
    int noz = 0;
    for(int i = 0; i< v.size(); i++){
        if(v[i] == 0) noz++;
        else noo++;
    }
    for(int i = 0 ; i<v.size();i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
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
    sort01(v);
    display(v);
}