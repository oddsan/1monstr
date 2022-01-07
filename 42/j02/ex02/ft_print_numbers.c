#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_numbers(void)
{
    char c;

    c = '0';
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}

int main()
{
    ft_print_numbers();
    ft_putchar('\n');
    return (0);
}