#include<iostream>
using  namespace std;
int insertionSort(int a[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp= a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;

        }
    }
}
int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
    insertionSort(a,n);

    for(int i=0; i<n; i++){
        cout<< a[i]<< " ";
    }

return 0;
}    
