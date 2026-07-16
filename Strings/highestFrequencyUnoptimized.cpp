#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxcount = 0;
    for(int i =0; i < s.size(); i++){
        char ch = s[i];
        int count = 1;
        for(int j = i+1; j < s.size(); j++){
            if(s[j] == s[i]) count++;
            maxcount = max(count, maxcount);
        }
    }
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        int count = 1;
        for(int j = i+1; j < s.size(); j++){
            if(s[j] == s[i]) count++;
        }
        if(count == maxcount ) cout<<ch<<" is repeated "<<maxcount<<" times"<<endl;
    }
}