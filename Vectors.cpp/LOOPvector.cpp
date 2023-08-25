#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a(5,1);
    cout<<"a is" <<" ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}