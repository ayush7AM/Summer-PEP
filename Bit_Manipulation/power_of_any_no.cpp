#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    //Enter the number to check power
    int number;
    cin>>number;
    int n;
    cin>>n;
    if(n<=0) cout<<"false";
    while(n%number==0) n/=number;
    cout<<(n==1);
}