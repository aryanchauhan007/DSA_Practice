#include <iostream>
using namespace std;

int main(){

int n;
	cin >> n;
    for (int i = 0; i <n; i++){
        //space
        for(int j=0; j<n-i-1; j++ ){
            cout<< " ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<n-i-1; j++ ){
            cout<< " ";
        }
        cout << endl;
    }

	for (int i = 0; i<n; i++){
        //space
        for(int j=0; j<i; j++ ){
            cout<< " ";
        }
        //stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<i; j++ ){
            cout<< " ";
        }
        cout << endl;
    }
}    