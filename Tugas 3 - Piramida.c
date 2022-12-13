#include <stdio.h>

int main() {
  int i, j, height;

  printf("Masukkan tinggi piramida: ");
  scanf("%d", &height);

  if (height % 2 == 0) {
    printf("Tinggi piramida harus bilangan ganjil!\n");
    return 1;
  }

  for (i = 1; i <= height; i++) {
    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  for (i = height - 1; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
