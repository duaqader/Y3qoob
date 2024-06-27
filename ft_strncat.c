/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;
    
 
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] += src[j];
        i++;
        j++;
    }
    dest[i]= '\0'; 
    return (dest);
}

int main() {
    char dest[50] = "Hello, "; // Ensure dest has enough space to hold the concatenated result
    char src[] = "World!";
    unsigned int nb = 3;
    
    // Concatenate src to dest up to nb characters
    ft_strncat(dest, src, nb);
    
    // Print the concatenated string
    printf("Concatenated string: %s\n", dest);
    
    return 0;
}