#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    vector<int> v(26,0);
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii - 97]++;
    }
    int max = 0;
    for(int i = 0; i < 26; i++){
        if(max < v[i]) max = v[i];
    }
    for(int i = 0; i < 26; i++){
        int ascii = 97 + i;
        char ch = (char)ascii;
        if(v[i] == max) cout<<ch<<" is repeated "<<v[i]<<" times"<<endl;
    }
}