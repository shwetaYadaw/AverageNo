#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int avg=0;
	for(int i=0;i<n;i++){
		avg+=arr[i];
	}
	cout<<avg/n<<" ";
}
