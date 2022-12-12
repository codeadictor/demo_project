#include<iosream>
using namespace std;

int main(){
	// here we add the feature of array using 
	// dynamic array 
	// i.e. is vector
	
	int n;
	cin>>n;
	vector<int> vv;
	int temp;

	for(int i=0;i<n;i++){
		cin>>temp;
		vv.push_back(temp);
	}

	// now multi it with any number like 2 3 four .. as user want 
	cout<<"please enter value that you want to print that value"<<endl;

	int x;
	cin>>x;


	for(int i = 0;i<n;i++){
		cout<<vv[i]*x<<" ";

	}
	cout<<endl;

	return 0;

}

// so this is done featur added
		
