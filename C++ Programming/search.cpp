#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,5,6,2,7,8};
    int key=2;
    int i;

    for(i=0;i<6;i++){
        if(arr[i]==key){
            cout<<key;
        }
    }
    cout << "\nMin Element = " << *min_element(arr, arr + 0);

}

