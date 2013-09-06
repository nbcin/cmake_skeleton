#include "hello.h"

static void
_result_generate(void)
{
   static unsigned int count = 0;

   printf(">[%u] %i\n", ++count, hello_plus(rand() % 200, rand() % 200));
}

int
main(int argc EINA_UNUSED, char **argv)
{
   int i;

   hello_init();
   srand(time(NULL));

   printf("This is %s\n", argv[0]);

   for (i = 15; i > 1; i = rand() % 16)
     _result_generate();

   printf("End of program\n");
   hello_shutdown();

   return EXIT_SUCCESS;
}

