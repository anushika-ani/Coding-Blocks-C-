#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[]={1,2,5,6,7,8};
	int n=sizeof(a)/sizeof(int);
	int m;
	cin>>m;
	auto it=lower_bound(a,a+n,m);
	cout<<(it-a);
}
