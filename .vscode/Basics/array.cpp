#include <iostream>
using namespace std;

int main(){
    int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

    
    // // 1D array
    // int a[5];
    // // 2D array
    // int a[3][5];
    // cin>> a[0]>> a[1]>> a[2]>> a[3]>>a[4];

    // cout<< a[3];
    // return 0;

    for(int i=0; i<n; i++){
        cout<< a[i]<< " "<< endl;
    }
    return 0;
}