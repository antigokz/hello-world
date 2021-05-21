#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Hello");
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
  printf("!\n");
  return 0;
}

        
