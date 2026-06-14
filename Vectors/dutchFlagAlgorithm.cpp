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
    int low = 0;
    int high = v.size()-1;
    int mid = 0;
    while(mid<=high){
        if(v[mid] == 0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else if(v[mid] == 2){
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else{
            mid++;
        }
    }
    return;
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
    sort012(v);
    display(v);
}