#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;

    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);

    return rightWays+downWays;
}

//2nd approach : 
int maze2(int row,int col){

    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;

    int rightWays = maze2(row,col-1);
    int downWays = maze2(row-1,col);

    return rightWays+downWays;
}

void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }

    printPath(sr,sc+1,er,ec,s+"R"); //right
    printPath(sr+1,sc,er,ec,s+"D"); //down
}

int main(){
    printPath(1,1,3,3,"");
}