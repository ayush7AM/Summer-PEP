#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkKthBit(int n, int k) {
        //  code here
        int mask = 1<<k;
        if((n & mask)!=0) return true;
        else return false;
        
    }
int main(){
    cout<<checkKthBit(2,1);
}