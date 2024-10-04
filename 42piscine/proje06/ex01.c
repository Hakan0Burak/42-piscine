#include <unistd.h>

int  main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while(argv[j])
    {
        while (argv[j][i])
        {
            write(1,&argv[j][i],1);
            i++;
        }
        write(1,"\n",1);
        j++;
        i = 0;
    }
}