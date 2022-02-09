#include <stdio.h>
#include <string.h>
#define MAX_NUM_OF_ARGS 5
#define MAX_ARG_SIZE 256

int main(int argc, char **argv) {
  char argumentArray[MAX_NUM_OF_ARGS][MAX_ARG_SIZE] = {
      {'d', 'e', 'f', 'a', 'u', 'l', 't', 'A', 'r', 'g'},
      {'d', 'e', 'f', 'a', 'u', 'l', 't', 'A', 'r', 'g'},
      {'d', 'e', 'f', 'a', 'u', 'l', 't', 'A', 'r', 'g'},
      {'d', 'e', 'f', 'a', 'u', 'l', 't', 'A', 'r', 'g'},
      {'d', 'e', 'f', 'a', 'u', 'l', 't', 'A', 'r', 'g'}};

  if (argc < 6) {
    for (int i = 0; i < argc; i++) {
      strcpy(argumentArray[i], argv[i]);
    }
    for (int i = 0; i < MAX_NUM_OF_ARGS; i++) {
      printf("argumentArray[%d]: %s\n", i, argumentArray[i]);
    }
  }

  else {
    printf("Your arguments exceeded the maximum number of arguments (4)\n");
  }

  return 0;
}
