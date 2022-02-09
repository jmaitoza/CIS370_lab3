#include <stdio.h>
#include <string.h>
#define MAX_NUM_OF_ARGS 5
#define MAX_ARG_SIZE 256


int main (int argc, char **argv)
{
  char argumentArray[MAX_NUM_OF_ARGS][MAX_ARG_SIZE] = 
  {
    {'d','e','f','a','u','l','t','A','r','g'},
    {'d','e','f','a','u','l','t','A','r','g'},
    {'d','e','f','a','u','l','t','A','r','g'},
    {'d','e','f','a','u','l','t','A','r','g'}
  };

  // for (int j = 0; j < 5; j++)
  // {
  //   strcpy(argumentArray[j], "defaultArg");  
  //     printf("%s\n", argumentArray[j]);
  // }

  for (int i = 0; i < MAX_NUM_OF_ARGS; i++)
  {    
     strcpy(argumentArray[i], argv[i]); 
    // argumentArray[i] = argv[i];
    printf("argumentArray[%d]: %s\n", i, argumentArray[i]);
  }
  return 0;
}

