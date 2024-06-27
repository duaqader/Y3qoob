/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
    
    // Compare strings using ft_strcmp
    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str1, str4);
    int result4 = ft_strcmp(str3, str4);
    
    // Compare strings using standard strcmp
    int std_result1 = strcmp(str1, str2);
    int std_result2 = strcmp(str1, str3);
    int std_result3 = strcmp(str1, str4);
    int std_result4 = strcmp(str3, str4);
    
    // Print the results
    printf("ft_strcmp result between \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("strcmp result between \"%s\" and \"%s\": %d\n", str1, str2, std_result1);
    
    printf("ft_strcmp result between \"%s\" and \"%s\": %d\n", str1, str3, result2);
    printf("strcmp result between \"%s\" and \"%s\": %d\n", str1, str3, std_result2);
    
    printf("ft_strcmp result between \"%s\" and \"%s\": %d\n", str1, str4, result3);
    printf("strcmp result between \"%s\" and \"%s\": %d\n", str1, str4, std_result3);
    
    printf("ft_strcmp result between \"%s\" and \"%s\": %d\n", str3, str4, result4);
    printf("strcmp result between \"%s\" and \"%s\": %d\n", str3, str4, std_result4);
    
    return 0;
}
