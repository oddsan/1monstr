#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

int ft_nputchar(char a, char b, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(d);
}

void ft_print_comb(void)
{
    int x;
    int y;
    int z;

    x = '0';
    y = '1';
    z = '2';
    while (x <= '7')
    {
        while (y <= '8')
        {
            while (z <= '9')
            {
                ft_nputchar(x, y, z);
                if (x != '7' || y != '8' || z != '9')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                z++;
            }
            y++;
            z = y + 1;        
        }
        x++;
        y = x + 1;
        z = y + 1;    
    }
}

int main()
{
    ft_print_comb();
    ft_putchar('\n');
    return(0);
}