#include<iostream>
#include<vector>
using namespace std;    
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements in vector: ";
    cin>>n;
    for(int i = 0; i< n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x,last = -1;
    cout<<"Enter the key: ";
    cin>>x;
    for(int i = v.size()-1; i>=0 ;i--){
        if(v[i] == x) {
            last = i;
            break;
        }
    }
    cout<<"The last occurence of "<<x<<" is "<<last<<endl;
}