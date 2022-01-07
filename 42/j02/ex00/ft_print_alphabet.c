#include <unistd.h>

void ft_print_alphabet(void);

int main()
{
    write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
    return(0);
}