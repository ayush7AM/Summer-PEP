#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    if((n^1) == n+1) cout << n << " is an even number";
    else cout << n << " is an odd number.";
}