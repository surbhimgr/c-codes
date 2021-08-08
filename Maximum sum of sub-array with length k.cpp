#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int msum=0;
    for(int i=0;i<k;i++){
        msum+=arr[i];
    }
    int cursum=msum;
    for(int i=k;i<n;i++){
        cursum=cursum+arr[i]-arr[i-k];
        if (cursum>msum){
            msum=cursum;
        }
    }
    cout<<msum;
	return 0;
}
