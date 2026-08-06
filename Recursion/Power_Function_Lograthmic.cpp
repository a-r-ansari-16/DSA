#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    int ans = pow(a,b/2);
    if(b%2 == 0){
        return ans*ans;
    }
    else return a*ans*ans;
}
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;
    if(a==0 && b==0) cout<<"Not defined";
    else cout<<"The value of "<<a<<" raised to the power "<<b<<" is "<<pow(a,b)<<endl;
}