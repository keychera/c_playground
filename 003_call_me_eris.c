#include <stdio.h>

void skip(char *msg)
{
  printf("%s\n", msg + 6);
  printf("%i\n", *(msg + 6));
  // this below is our first segfault
  // printf("%s", *(msg + 6));
}


int main()
{
    char *msg_from_eris = "Don't call me";
    skip(msg_from_eris);
    return 0;
}
