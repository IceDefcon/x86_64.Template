#include <iostream>     // system
#include "dump.h"


int a = 0xFFFF1234;
int b = 0x00001234;

int main(int argc, char* argv[]) 
{
    system("clear");

    int * pa = &a;
    int * pb = &b;

    printf("poiter a ---> %x\n",pa);
    printf("poiter b ---> %x\n",pb);

    //RegDump();

    return 0;
}

