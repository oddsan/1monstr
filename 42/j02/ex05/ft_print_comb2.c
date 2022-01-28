#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

int ft_nputchar(char e, char f)
{
    ft_putchar(e);
    ft_putchar(f);
}

int ft_sputchar(char g, char h)
{
    ft_putchar(g);
    ft_putchar(h);
}

void ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '8')
        {
            c = '0';
            while (c <= '9')
            {
                d = b + 1;
                while (d <= '9')
                {
                    ft_nputchar(a, b);
                    ft_putchar(' ');
                    ft_sputchar(c, d);
                    if (a != '9' || b != '8' || c != '9' || d != '9')
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                    d++;
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
    ft_print_comb2();
    ft_putchar('\n');
    return(0);
}