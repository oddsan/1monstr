#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

void ft_is_negative(int n)
{
        if (n < 0)
        {
            ft_putchar('N');
        }
        else 
        {
            ft_putchar('P');
        }   
}

int main()
{
    ft_is_negative(15);
    ft_putchar('\n');
    return(0);
}
