#include<iostream>
using  namespace std;
int bubbleSort(int a[], int n){

    for(int i=n-1 ; i>=1; i--){
        int flag =0;
        for(int j=0; j<=i-1;j++){
        
            if(a[j]>a[j+1])
            {//swapping using temp variable
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp; 
                flag =1;
            }
        }
        if(flag==0){
            break;
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
    bubbleSort(a,n);

    for(int i=0; i<n; i++){
        cout<< a[i]<< " ";
    }

return 0;
}    