#include<iostream>
#include<string>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc == ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays + downWays;
}
void printPath(int er, int ec, string s){
    if(er < 1 || ec < 1) return;
    if(er == 1 && ec == 1){
        cout<<s<<endl;
        return;
    }
    printPath(er,ec-1,s+'R');
    printPath(er-1,ec,s+'D');
}
int maze2(int er, int ec){
    if(er == 1 || ec == 1) return 1;
    int rightWays = maze2(er-1,ec);
    int downWays = maze2(er,ec-1);
    return rightWays + downWays;
}
int main(){
    int m;
    cout<<"Enter the starting row: ";
    cin>>m;

    int n;
    cout<<"Enter the starting column: ";
    cin>>n;

    int x;
    cout<<"Enter the destination row: ";
    cin>>x;

    int y;
    cout<<"Enter the destination coumns: ";
    cin>>y;

    cout<<maze(m,n,x,y)<<endl;
    cout<<maze2(x,y)<<endl;
    printPath(x,y,"");
}