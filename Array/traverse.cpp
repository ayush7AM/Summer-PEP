#include <iostream>
using namespace std;
//traverse an array
int main(){
    int arr[] = {1,2,3,4,5};
    for(auto it: arr){
        cout<<it<<" ";
    }
    int x;
    cin>>x;
    int pep[x];
    for(int i =0;i<x;i++){
        cin>>pep[i];
    }
    for(auto it:pep){
        cout<<it<<" ";
    }
}
