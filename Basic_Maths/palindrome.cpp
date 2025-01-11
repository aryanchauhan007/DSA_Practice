#include<iostream>
using namespace std;

int main(){
    int n;
    int l;
    cin>> n;
    int revNum =0;
    int dup =n;

  while(n>0){
        int l= n%10;
        revNum = (revNum*10)+ l;
        n =n/10;
        
    }
    if(dup==revNum){
        cout <<" It is a palanidrome";
    }else{
        cout<< "Not a palindrome";
    }
}  