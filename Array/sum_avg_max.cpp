#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4};
    double sum = accumulate(v.begin(),v.end(),0);
    int n = v.size();
    double avg = sum/n;
    int maxi = *max_element(v.begin(),v.end());
    cout<<"Total sum: "<<sum<<" Average: "<<avg<<" Maximum: "<<maxi;
    int second_max =0;
    for(int i=0;i<n;i++){
        if(v[i]>second_max && v[i]<maxi){
            second_max = v[i];
        }
    }
    
    cout<<"Second Max: "<<second_max;
}
