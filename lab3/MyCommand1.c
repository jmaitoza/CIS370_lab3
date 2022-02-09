#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp) {
  int sum = 0;
  int *intArray;
  // intArray = (int *)malloc(argc);
  intArray = (int *)malloc(sizeof(argc - 1));

  if (argc == 1) {
    printf("Please input a list of non-negative whole numbers.");
  }

  else {
    for (int i = 0; i < argc - 1; i++) {
      intArray[i] = atoi(argv[i + 1]);
      sum = sum += intArray[i];
      printf("intArray[%d] = %d\n", i, intArray[i]);
    }
    printf("Sum: %d", sum);
  }

  free(intArray);
  return 0;
}
