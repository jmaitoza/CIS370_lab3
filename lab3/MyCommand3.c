#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char **stringArray = NULL;
  stringArray = (char **)malloc((argc + 1) * sizeof(char *));

  for (int i = 0; i < argc; i++) {
    stringArray[i] = (char *)malloc((strlen(argv[i]) + 1) * sizeof(char));
    strcpy(stringArray[i], argv[i]);
  }

  for (int j = 0; j < argc; j++) {
    printf("stringArray[%d]: %s\n", j, stringArray[j]);
  }

  free(stringArray);
  return 0;
}
