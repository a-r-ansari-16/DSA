#include<iostream>
using namespace std;
 int main(){
    int n;
    int sum = 0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout<<"The sum of the elements of the array is: "<<sum<<endl;
 }