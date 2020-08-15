#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int number;
	cin>>number;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==number){
			    int k=min(arr[i],arr[j]);
			    int l=max(arr[i],arr[j]);
				cout<<k<<" and "<<l;
				cout<<endl;
			}
		}
	}


	return 0;
}
