#include "hello.h"
#include <stdio.h>

int
main(void)
{
   int a = 4, b = 6;

   printf("> %i\n", hello_plus(a, b));
   printf("> %i\n", hello_minus(b, a));

   return 0;
}

