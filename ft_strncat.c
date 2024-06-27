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
    char dest1[50] = "Hello, "; // Ensure dest1 has enough space to hold the concatenated result
    char dest2[50] = "Hello, "; // Separate buffer for standard strncat
    char src[] = "World!";
    unsigned int nb = 3;
    
    // Concatenate src to dest1 up to nb characters using ft_strncat
    ft_strncat(dest1, src, nb);
    
    // Concatenate src to dest2 up to nb characters using standard strncat
    strncat(dest2, src, nb);
    
    // Print the results
    printf("Result using ft_strncat: %s\n", dest1);
    printf("Result using standard strncat: %s\n", dest2);
    
    return 0;
}
