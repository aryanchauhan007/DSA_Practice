 #include<iostream>
using namespace std;

int main(){
    int n;
    int l;
    cin>> n;
    int dup = n;
    int sum =0;

  while(n>0){
        int l= n%10;
        sum= sum + (l*l*l);
        n =n/10;
    }
    if(sum==dup){
        cout<< "True";
    }else{
        cout<< "False";
    }
}