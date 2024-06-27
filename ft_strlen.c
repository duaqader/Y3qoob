/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    unsigned int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main() {
    char str[] = "Hello, World!";
    
    // Calculate the length of the string
    int length = ft_strlen(str);
    
    // Print the length of the string
    printf("The length of the string \"%s\" is: %d\n", str, length);
    
    return 0;
}
