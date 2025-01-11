#include <bits/stdc++.h>
 using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //let largest =a[0]
    int largest= a[0];
    for(int i=1; i<n; i++){
        if(largest<a[i]){
            largest =a[i];
        }
    }
    //let the second largest element=-1
    int secondL=-1;
    for(int i=0; i<n; i++){
        if(a[i]>secondL && a[i]!=largest){
            secondL= a[i];

        }
    }
    cout << secondL;
}    