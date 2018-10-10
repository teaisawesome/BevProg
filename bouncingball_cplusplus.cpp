#include<stdio.h>
#include<math.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define SZEL 78
#define MAG 22

int putX(int x, int y)
{
    int i;

    for(i=0;i<x;i++)
        printf("\n");

    for(i=0;i<y;i++)
        printf(" ");

    printf("^-^\n");

    return 0;
}

int main()
{
    long int x=0;

    long int y=0;

    while(1)
    {
        system("clear");
        
        putX(abs(MAG-(x++%(MAG*2))),abs(SZEL-(y++%(SZEL*2))));
        
        usleep(55000);
    }

    return 0;
}
