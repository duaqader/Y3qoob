/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            return (to_find[j]);
            j++;
        }
        i++;
    }
   str[i] = '\0';
}
