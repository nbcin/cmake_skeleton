#include "hello.h"

static int _init_count = 0;

int
hello_init(void)
{
   eina_init();
   return ++_init_count;
}

int
hello_shutdown(void)
{
   eina_shutdown();
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
