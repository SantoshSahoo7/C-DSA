#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]= {5,3,1,4,2};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        int min = INT16_MAX;
        int indx = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                indx = j;
            }
        }
        swap(arr[i],arr[indx]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}