
int main(){
    int i;
int a[5]={1,2,3,2,1};
    int b[5];
    for(int i=0;i<5;i++){
    for(int i=0;i<5;i++){
         b[i]=a[i];
    }
    }
    if(a[i]==b[4-i]){
        cout<<"Pallindrome";
    }else{
        cout<<"Not a Pallindrome";
    }
    return 0;
}