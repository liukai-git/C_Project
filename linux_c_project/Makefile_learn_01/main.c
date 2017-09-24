#include <stdio.h>
#include "sum.h"
#include "test_code.h"

#define Hello_World

int main(int argc, const char *argv[])
{
   int a = 10;
   int b = 20;
   
   printf("The sum is %d\n", sum(a,b));
   #ifndef Hello_World
    	Test_code();
   #endif
   return 0;
}
