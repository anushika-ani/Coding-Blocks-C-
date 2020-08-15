#include<iostream>
using namespace std;

int main() {
	int i=0,n;
	cin>>n;
	if(n>0){
	
	while(i<=n-1){
		if(i==0){
			cout<<1;
			i+=1;
			cout<<endl;
		}
			if(i>=1){
			
		int j=0;
		
		cout<<i;
		while(j<=i-2){
			cout<<0;
			j+=1;
		}
		
		cout<<i;
		cout<<endl;
		
		i+=1;
	}
	}
}
	return 0;
}
