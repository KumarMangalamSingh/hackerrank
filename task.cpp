int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1=0,sum2=0;
    for(int i=0;i<arr_rows;i++){
        for(int j=0;j<arr_columns;j++){
            if(i==j){
               sum1=sum1+arr[i][j]; 
            }
           else if(i==arr_columns-j-1){
                sum2=sum2+arr[i][j];
            }
        }
    }
    
return abs(sum1-sum2);
}
