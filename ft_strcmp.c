/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i = 0;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Helloo";
    char str4[] = "Hell";
    
    // Compare strings
    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str1, str4);
    int result4 = ft_strcmp(str3, str4);
    
    // Print the results
    printf("Comparison result between \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparison result between \"%s\" and \"%s\": %d\n", str1, str3, result2);
    printf("Comparison result between \"%s\" and \"%s\": %d\n", str1, str4, result3);
    printf("Comparison result between \"%s\" and \"%s\": %d\n", str3, str4, result4);
    
    return 0;
}
