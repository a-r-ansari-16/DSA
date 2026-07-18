// Finding maximum number in the Array of strings
// Approach -> convert string into number using stoll builtin function then find max Element.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string arr[] = {"00123","0023","0056","00183","940","2901"};
    long long max = 0;
    for(int i = 0; i < 6; i++){
        int x = stoll(arr[i]);
        if(max < x){
            max = x;
        }
    }
    cout<<"Max number is : "<<max<<endl;
}