#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int number;
	cin>>number;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
		    for(int k=0;k<j;k++){
			    if(arr[i]+arr[j]+arr[k]==number){
			        int c[1000]={arr[i],arr[j],arr[k]};
			        sort(c,c+3);
			        cout<<c[0]<<", "<<c[1]<<" and "<<c[2];
				    cout<<endl;
		    	}
			}
		}
	}


	return 0;
}
