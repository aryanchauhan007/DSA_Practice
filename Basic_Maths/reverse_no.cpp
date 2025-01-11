#include<iostream>
using namespace std;

int main(){
    int n;
    int l;
    cin>> n;
    int revNum =0;

  while(n>0){
        int l= n%10;
        revNum = (revNum*10)+ l;
        n =n/10;
        
    }
    cout<< revNum;
} 