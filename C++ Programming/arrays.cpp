#include<iostream>
using namespace std;
int main(){
int n;
int m;
cin>>n>>m;
int arr [n][m];
for(int k=)
for (int i=0;i<n; i++) {
for (int j=0; j<m; j++) {
cin>>arr[i][j];
}
}
cout<<"Matrix is: \n";
for (int i=0;i<n; i++) {
for (int j=0;j<m; j++) {
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
