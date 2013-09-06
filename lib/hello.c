#include "hello.h"

static int _init_count = 0;

int
hello_init(void)
{
   if (_init_count == 0)
     {
        if (eina_init() == 0)
          goto eina_init_fail;
     }

   return ++_init_count;

eina_init_fail:
   return 0;
}

int
hello_shutdown(void)
{
   if (_init_count == 1)
     {
        eina_shutdown();
     }

   return --_init_count;
}

int
hello_plus(int a, int b)
{
   return a + b;
}

int
hello_minus(int a, int b)
{
   return a - b;
}

