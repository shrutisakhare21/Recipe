#include <iostream>
using namespace std;

int main() {
     int i,n,count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
for(i=0;i<n;i++){
    if(arr[i]>1000){
        count ++;
    }
}
cout<<count<<endl;

	return 0;
}
