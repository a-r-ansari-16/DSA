#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of student: ";
    cin>>n;
    int marks[n];
    for(int i = 0; i<n;i++){
        cout<<"Enter the "<<i+1<<" student marks: ";
        cin>>marks[i];
    }
    for(int i = 0; i < n; i++){
        if(marks[i]<35) cout<<i<<endl;
    }
}

