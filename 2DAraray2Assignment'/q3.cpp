#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter row and col : ";
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int j=0; j<n; j++){
        if(j%2 != 0){
            for(int i=0; i<m; i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}