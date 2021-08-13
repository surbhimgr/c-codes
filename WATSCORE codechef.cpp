#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
    	cin>>n;
    	int arr[101]={0};
    	for(int i=0;i<n;i++){
    	    int ind,temp;
    	    cin>>ind>>temp;
    	    if(temp>arr[ind] && ind<9){
    	        arr[ind]=temp;
    	    }
    	}
    	int s=0;
    	for(int j=1;j<9;j++){
    	    s+=arr[j];
    	}
    	cout<<s<<"\n";
	}
	return 0;
}
