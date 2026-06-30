#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // if(n<=0) cout<<"false";
    // while(n%2==0) n/=2;
    // cout<<(n==1);


    //XOR Method
    if((n & (n-1))==0) cout<<true;
    else cout<<false;
}