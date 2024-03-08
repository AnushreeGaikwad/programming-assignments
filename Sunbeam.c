#include<stdio.h>
int main(int argc,int argv[])
{
    int highest=argv[1];
    for(int i=1;i<argc;i++)
    {
        if(argv[i]>highest);
        {
            highest=argv[i];
        }
    }
    printf("%i\n",highest);
}
