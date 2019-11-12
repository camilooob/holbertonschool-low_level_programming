#include <stdio.h>
 
  int main()
  {
    int x = 10;
    int y = 5;
    char *name = "Jimmy";
 
    x += 1;
    x += y; 
    printf("Name is %s\n", name);
    printf("Number x is %d\n", x);
  }
