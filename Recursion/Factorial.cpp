#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0) return 1;        //base case
    return n*factorial(n-1);  // recursive call
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
}