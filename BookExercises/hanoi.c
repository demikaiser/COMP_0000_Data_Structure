#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hanoi_tower(int n, char from, char tmp, char to){
  if (n==1){
    printf("disk1 moved %c to %c\n",from, to);
  }
  else{
    hanoi_tower(n-1, from, to, tmp);
    printf("disk %d moved %c to %c\n", n, from, to);
    hanoi_tower(n-1, tmp, from, to);

  }
}
main(){
  hanoi_tower(4,'A','B','C');
}
