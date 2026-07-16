#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Aman is a maths teacher. Aman is a DSA mentor. Aman is amazing";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count = 1;
    int maxCount =1;
    for(int i =1; i < v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxCount = max(count,maxCount);
    }
    count = 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxCount = max(count,maxCount);
        if(maxCount == count) cout<<v[i]<<" is repeated "<<maxCount<<" times"<<endl; 
    }
}