#include<iostream>
using namespace std;
int main() {
	int n,sum,p;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>sum;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]+a[j]==sum){
				if(a[i]>a[j]){
					p=a[j];
					a[j]=a[i];
					a[i]=p;
				}
				cout<<a[i]<<" and "<<a[j];
				
			}
			
			cout<<endl;
			
		}
	}
	return 0;
}
