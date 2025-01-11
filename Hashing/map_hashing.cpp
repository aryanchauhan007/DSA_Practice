#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    //precompute
    unordered_map<int,int> mpp;
    for(int i=0; i<n ;i++){
        mpp[a[i]]++;
    }
     //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<< it.second<<endl;
    }
    
    int q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<< endl;
    }
    return 0;
}