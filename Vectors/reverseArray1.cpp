#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
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
    display(v);
    int i= 0;
    int j = v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
}