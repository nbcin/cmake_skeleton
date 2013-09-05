#include "hello.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void
_result_generate(void)
{
   static unsigned int count = 0;

   printf(">[%u] %i\n", ++count, hello_plus(rand() % 200, rand() % 200));
}

int
main(int argc, char **argv)
{
   int i;

   srand(time(NULL));

   printf("This is %s\n", argv[0]);

   for (i = 15; i > 1; i = rand() % 16)
     _result_generate();

   printf("End of program\n");

   return EXIT_SUCCESS;
}

