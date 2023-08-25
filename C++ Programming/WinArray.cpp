#include<iostream>
using namespace std;
/*
int main(){
    int x;
    cin>>x;
    int arr[100];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
     int a[2];
    for(int i=0;i<2;i++){
        if(a[0]>a[1]){
            cout<<1<<abs(a[0]-a[1]);
        }else{
            cout<<2<<abs(a[0]-a[1]);
        }
    }
   
}

*/

                 
int main()
{
    int rows, cols=2;
    cin >> rows;

    int matrix[rows][cols];
     for(int i = 0; i <rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 2; j++)
        {
           if (matrix[i][j] > matrix [i+1][j+1]) {
       cout<<1<<(matrix[i]-matrix[j])<<endl;
}else{
     cout<<2<<(matrix[j]-matrix[i])<<endl;
}
        }
    
 }
 return 0;
}
 
/*
    // Output for sum of matrices
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << abs(i-j) << " ";
        }
        cout << endl;
    }

    return 0;
}
*/