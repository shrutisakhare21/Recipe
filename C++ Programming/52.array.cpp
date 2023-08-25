#include<iostream>
using namespace std;

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
else
{
    cout<<"2";
    cout<<arr[2]-arr[1];
}
   t--; 
    }
return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[n][2];

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter value for column 1, row " << i+1 << ": ";
        std::cin >> data[i][0];
        std::cout << "Enter value for column 2, row " << i+1 << ": ";
        std::cin >> data[i][1];
    }

    // Displaying the inputted data in a 2-column structure
    std::cout << "\nEntered data:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << data[i][0] << "\t" << data[i][1] << std::endl;
    }

    return 0;
}

int main(){
int t,m,i;
cin>>t;
while(t>0){
    int arr[m][2];
    cin>>m;
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    for(i=0;i<m;i++){
        if(arr)
    }
}
}

