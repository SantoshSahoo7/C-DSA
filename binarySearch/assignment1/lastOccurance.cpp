#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,4,4,4,4,5,5,7,8,9,9};
    int n = 16;//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
    int lo = 0;
    int hi = n-1;
    int x = 3;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{
                lo = mid+1;
            }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    if(flag == false){
        cout<<-1;
    }
}