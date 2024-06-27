/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    unsigned int i;
    
    i=0;
    while (str[i] != '\0')
    {
        write(1, &str[i],1);
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    // Print the string using ft_putstr
    ft_putstr(str);
    
    return 0;
}
