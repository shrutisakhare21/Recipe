#include<bits/stdc++.h>
using namespace std;

class frnd{
    public:
    int arr[]   ;
};

int add(int arr[]){
    int sum = 0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    for(int i=0;i<5;i++) arr[i]+=10;
    for(int i=0;i<5;i++) cout<<arr[i]<<endl;    //2 loops one for input and other for output;
    cout<<"total sum "<<add(arr)<<endl;
    return 0;
}