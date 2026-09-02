#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void traversal(vector<int>& v,int idx){
    if(idx == v.size()) return;
    cout<<v[idx]<<" ";
    traversal(v,idx + 1);
}

int maximum1(vector<int>& v, int maximum, int idx){
    if(idx == v.size()) return maximum;

    if(maximum < v[idx]) maximum = v[idx];
    return maximum1(v,maximum,idx + 1);
}
int main(){
    vector<int> v = {1,3,5,16,3,7,8};
    traversal(v,0);
    cout<<endl<<maximum1(v,INT_MIN,0)<<endl;
}