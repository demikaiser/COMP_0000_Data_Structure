int NonR_A(int m, int n){
  int table[5][5000];
  int i, j;
  for (i =0; i <= m; i++){
    if(i==0){
      table[i][j] = j+1;
    }
    else if(j==0) {
      table[i][j] = table[i-1][1];
    }
    else{
      table[i][j] = table[i-1][table[i][j-1]];
    }

  }
  return table[m][n];
}
