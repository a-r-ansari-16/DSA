#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& v, int target){
    int lo = 0;
    int hi = v.size()-1;
    int mid = lo + (hi-lo)/2;
    while(lo<=hi){
        if(v[mid] == target) return mid;
        else if(v[mid] > target) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element of the vector: ";
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<binarySearch(v,target);
}