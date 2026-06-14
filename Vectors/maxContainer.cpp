#include<iostream>
#include<vector>
using namespace std;
int maxContainer(vector<int>& v){
    int maxArea = 0;
    for(int i = 1; i < v.size() ; i++){
        for(int j = i+1; j <= v.size() ; j++){
            if(maxArea < (j-i)*min(v[i-1],v[j-1])) maxArea =  (j-i)*min(v[i-1],v[j-1]);
        }
    }
    return maxArea;
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
    cout<<maxContainer(v)<<endl;
}