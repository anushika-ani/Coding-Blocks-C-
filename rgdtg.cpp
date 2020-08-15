#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b;
	
	while(n>0){
		if(n==sqrt(a^2+b^2) || n==sqrt(a^2-b^2)){
			cout<<a<<b;
		}
	}
	return 0;
}
