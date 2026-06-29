#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int gcd(int a,int b){
    if(a==0) return b;
    return(gcd(b%a,a)); //Euclid's Algo
}

int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}


/*Euclid's Algorithm 
gcd(a,b) = gcd(b%a,a)
if (a == 0)
        return b;
    return findGCD(b % a, a);
*/

int main(){
    cout<<"GDC :"<<gcd(12,44)<<endl;
    cout<<"LCM :"<<lcm(12,44)<<endl;
}