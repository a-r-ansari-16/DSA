#include<iostream>
using namespace std;
void print(int n,int a){
    if(a>n) return;
    cout<<a<<endl;
    print(n,a+1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n,1);
}