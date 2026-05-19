#include <stdio.h>
#include <string.h>

void print_number(int i)
{
    if(i == 6)
    {
        return;
    }
    printf("%d\n", i);
    print_number(i + 1);
}
// reverse
void print_number_reverse(int i)
{
    if(i == 0)
    {
        return;
    }
    printf("%d\n", i);
    print_number_reverse(i - 1);
}

void number(int i)
{
    if(i == 6)
    {
        return;
    }
    number(i + 1);
    printf("%d\n", i);
}

int main()
{
    number(1);
    return 0;
}