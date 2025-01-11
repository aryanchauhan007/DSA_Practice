#include<iostream>
using namespace std;

int main(){
    int n;
    int l;
    cin>> n;

    int count =0;
  while(n>0){
        int l= n%10;
        cout<< l<< endl;
        count = count+1;
        n =n/10;
    }
    return count;
}