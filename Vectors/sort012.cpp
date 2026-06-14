#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void sort012(vector<int>& v){
    int noo = 0;
    int noz = 0;
    int no2 = 0;
    for(int i = 0; i< v.size(); i++){
        if(v[i] == 0) noz++;
        else if(v[i] == 1) noo++;
        else no2++;
    }
    for(int i = 0 ; i<v.size();i++){
        if(i<noz) v[i] = 0;
        else if(i>=noz && i<noz+noo) v[i] = 1;
        else v[i] = 2;
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
    sort012(v);
    display(v);
}