/* source.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getSum10(int n) {
  int sum;
  for (sum = 0; n != 0; n /= 10) {
    sum += n % 10;
  }

  return sum;
}

int main(int argc, char *argv[]) {
  if (argc < 2 || argc > 3) {
    printf("too much or too little arguments\n");
    return 0;
  }

  int n = atoi(argv[1]);
  if (n <= 0) {
    printf("array is empty\n");
    return 0;
  }

  printf("generetad array: \n");
  int *arr = malloc(n * sizeof(int));
  srand(time(NULL));
  int maksSumInd = 0;
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 100000;
    printf("%d %s", arr[i], " ");
    if (getSum10(arr[i]) > getSum10(arr[maksSumInd])) {
      maksSumInd = i;
    }
  }

  printf("\nnumbers with maximal decimal sum:\n");
  for (int i = 0; i < n; i++) {
    if (getSum10(arr[i]) == getSum10(arr[maksSumInd])) {
      printf("%d %s", arr[i], " ");
    }
  }

  printf("%s", "\n");

  free(arr);
}
