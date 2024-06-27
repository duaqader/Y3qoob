/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    unsigned int i = 0;
    
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[i] != '\0')
    {
        dest[i] += src[i];
        i++;
    }
    return (dest);
}

int main() {
    char dest[50] = "Hello, "; // Ensure dest has enough space to hold the concatenated result
    char src[] = "World!";
    
    // Concatenate src to dest
    ft_strcat(dest, src);
    
    // Print the concatenated result
    printf("Concatenated string: %s\n", dest);
    
    return 0;
}