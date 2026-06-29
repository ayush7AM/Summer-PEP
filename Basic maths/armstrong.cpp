#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n) {
    int f =n;
    int count=0;
    while(f>0){
       count++;
        f=f/10;
    }
    int sum = 0;
    int m =n;
    while(m>0){
        int k = m%10;
        sum = sum + (pow(k,count));
        m = m/10;
        }
    if(sum==n) return true;
    else return false;
}

vector<int>armstrongNumberinRange(int k, int f){
    vector<int>range;
    for(int i =k;i<f;i++){
        if(armstrongNumber(i)==1){
            range.push_back(i);
        }
    }
    return range;
}

int main(){
cout<<boolalpha<<armstrongNumber(153)<<endl;
vector<int> range = armstrongNumberinRange(1,153);
for(auto it: range){
        cout<<it<<" ";
}
cout<<endl;
}