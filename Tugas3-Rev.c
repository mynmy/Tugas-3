#include <stdio.h>

int main(void) {
  int t, i, j, k, l;

  printf("Tinggi Bintang : "); scanf("%d",&t);
  l = (t+1)/2;

  if (t % 2 == 1){
    i=1;
    while( i<=t){
      k+= (i>l) ? 2 : 0;

      j=1;
      while( i<=l ?j<=i : j<=(i-k)){
        printf("* ");
        j++;
      }
      i++;
      printf(" ");
      printf("\n");
    }
} 
  else {
  printf("\nKesalahan Input !!! \nmasukan bilangan ganjil");
  }
return 0;
}
