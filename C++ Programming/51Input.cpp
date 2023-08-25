#include <iostream>
using namespace std;
int main(){
    int t,i,n;
    cin>>t;
    while(t>0){
        int count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
for(i=0;i<n;i++){
    if(arr[i]>=1000){
        count++;
    }
}
cout<<count<<endl;
   t--; }
return 0;}

int main(){
    int t,i,n=2;
    cin>>t;
    while(t>0){
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
for(i=0;i<n;i++){
    if(arr[1]>arr[2]){
        cout<<"1";
        cout<<arr[1]-arr[2];
    }
}
else{
    cout<<"2";
    cout<<arr[2]-arr[1];
}
   t--; }
return 0;}


