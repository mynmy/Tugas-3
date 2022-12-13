// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //inisialisasi variabel
    int j, i, k, n, n1, n2;
    

    printf("Masukan Tinggi Bintang : "); scanf("%d",&n);
    //mencari nilai tengah
    n1=n/2+1;
    n2=n1-1;
    
    if (n % 2 == 1){
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                printf("*"); }
                printf("\n");
                
            if(i==n1){
                for(k=n2;k>=1;k--){
                    for(j=1;j<=k;j++){
                     printf("*");
                    }
                     printf("\n");
                     i++;
                }
            }  
           
        }  
    } else {
        printf("Kesalahan Input !!! \nmasukan bilangan ganjil");
    }
    return 0;
}
