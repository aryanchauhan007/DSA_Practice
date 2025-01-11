#include<bits/stdc++.h>
 using namespace std;
 
 int i,sum;

void func(int i,int sum){
    if(i<1){
        cout<< sum ;
    return ;
    }      
    func(i-1, sum+i);  
} 

int main(){
    int n;
    cin>> n;
    func(n,0);
}