#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubset(string res, string original){
    if(original == ""){
        cout<<"{"<<res<<"}"<<" ";
        return;
    }
    char ch = original[0];
    printSubset(res,original.substr(1));
    printSubset(res + ch, original.substr(1));
}
void storeSubset(string res, string original,vector<string>& v){
    if(original == ""){
        v.push_back(res);
        return;
    }
    char ch = original[0];
    storeSubset(res,original.substr(1),v);
    storeSubset(res + ch, original.substr(1),v);
}
int main(){
    vector<string> v;
    string str = "abc";
    printSubset("",str);
    cout<<endl;
    storeSubset("",str,v);
    for(string ele : v){
        cout<<"{"<<ele<<"}"<<" ";
    }
}