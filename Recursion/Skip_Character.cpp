#include<iostream>
#include<string>
using namespace std;
void removeChar(string result, string original, int idx) {
    if(idx == original.size()){
        cout<<result<<endl;
        return;
    }
    char ch = original[idx];
    if(ch == 'a') removeChar(result,original,idx + 1);
    else removeChar(result + ch, original, idx + 1);
}
int main(){
    string str = "aman riyaz ansari";
    removeChar("",str,0);
}