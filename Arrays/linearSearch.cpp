#include<iostream>
using namespace std;
int main(){
    int n;
    int key;
    cout<<"Enter the elemnt to be searched: ";
    cin>>key;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    bool flag = false;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(key == arr[i]){
            flag = true; 
        }
    }
    if(flag == true ) cout<<key<<" is present"<<endl;
    else cout<<key<<" is not present"<<endl;
}