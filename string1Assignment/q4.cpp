#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    if(n%2!=0){
        cout<<"invalid input";
    }
    else{
    reverse(s.begin()+n/2,s.end());
    cout<<s;
    }
}
