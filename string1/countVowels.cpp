#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    for(int i=0;s[i]!='0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<count;
}