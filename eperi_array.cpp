#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i = 0;i<n;i++)
		cin>>arr[i];

	// print the array that value have product of 2;



	for(int i = 0;i<n;i++)
		cout<<arr[i]*2<<" ";


	cout<<endl;



	return 0;
}
