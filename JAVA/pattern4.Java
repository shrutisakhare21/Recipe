class pattern4{
    public static void main(String args[]){
        int i,j;
        for(i=5;i>=1;i--){
            for(j=5;j>=1;j--){
                if(i==j || i>=j){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}