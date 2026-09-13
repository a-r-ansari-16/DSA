#include<iostream>
#include<vector>
using namespace std;
int firstMissing(vector<int> v){
    int n = v.size();
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid] == mid ) lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {0,1,3,4,6,7,8,9,12};
    cout<<firstMissing(v)<<endl;
}

// In linear approach we have O(n) in this we have O(logn) time complexity