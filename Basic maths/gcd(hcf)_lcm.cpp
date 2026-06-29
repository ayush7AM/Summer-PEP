#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}

int main(){
    cout<<"GDC :"<<gcd(12,44)<<endl;
    cout<<"LCM :"<<lcm(12,44)<<endl;
}