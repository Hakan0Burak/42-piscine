// 012, 789 023
#include <unistd.h>
void ft_print_comb()
{
    char a = '0';
    while (a <= '7')
    {
        char b = a + 1;
        while(b <= '8')
        {
            char c = b + 1;
            while (c <= '9')
            {
                write(1,&a,1);
                write(1,&b,1);
                write(1,&c,1);
                if (a != '7')
                {
                    write(1,", ",2);
                }
                
                c++;
            }
            b++;
        }
        a++;
    }
    
}

int main()
{
    ft_print_comb();
}