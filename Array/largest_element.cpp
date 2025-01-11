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
    cout << largest;
    
} 