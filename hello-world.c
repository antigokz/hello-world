#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Hello World");
  if (argc > 0) {
    int i;
    
    printf(", ");
    for (i = 1; < argc; i++) {
      printf(argv[i]);
      if (i < argc) {
        printf(" ");
      }
    }
  }
  printf(" -- from %s!\n", argv[0]);
  return 0;
}

        
