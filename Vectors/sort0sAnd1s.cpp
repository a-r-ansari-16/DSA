// 2 POINTER METHOD 

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
    int i = 0; 
    int j = v.size()-1;
    while(i<j){
        if(v[j] == 1) j--;
        else if(v[i] == 0) i++;
        else if(v[i]==1 && v[j]==0) {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
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