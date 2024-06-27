/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    unsigned int i = 0;
    unsigned int j = 0;
    
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
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
    char dest2[50] = "Hello, "; // Separate buffer for standard strcat
    char src[] = "World!";
    
    // Concatenate src to dest1 using ft_strcat
    ft_strcat(dest1, src);
    
    // Concatenate src to dest2 using standard strcat
    strcat(dest2, src);
    
    // Print the results
    printf("Result using ft_strcat: %s\n", dest1);
    printf("Result using standard strcat: %s\n", dest2);
    
    return 0;
}
