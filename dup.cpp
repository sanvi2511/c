#include<iostream>
using namespace std;
int main(){
    int a[]={1,1,1,2,3},i;
    int hash[100]={};
    for(i=0;i<5;i++){
        int x=a[i];
        hash[x]++;
    }
    for(i=0;i<10;i++){
        if(hash[i]!=0){
            cout<<hash[i];
        }
    }
    return 0;
}