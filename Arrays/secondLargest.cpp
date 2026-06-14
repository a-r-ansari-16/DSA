#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 0; i< n;i++){
        if(max < arr[i]) max = arr[i];
    }
    int secondMax = arr[0];
    for(int i = 0; i < n; i++){
        if(secondMax<arr[i] && arr[i] != max) secondMax = arr[i];
    }
    cout<<"The second max element of the array is "<<secondMax<<endl;
}