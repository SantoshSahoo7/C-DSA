#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int j=0; j<n; j++){
        if(j%2 == 0){
            for(int i=0; i<n; i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}