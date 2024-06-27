/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int ft_strcmp(char *s1, char *s2)
{
    unsigned int i = 0;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hellp";
    char str4[] = "He";
    
    // Compare strings using ft_strncmp
    int result1 = ft_strncmp(str1, str2, 5);
    int result2 = ft_strncmp(str1, str3, 5);
    int result3 = ft_strncmp(str1, str4, 2);
    int result4 = ft_strncmp(str3, str4, 3);
    
    // Compare strings using standard strncmp
    int std_result1 = strncmp(str1, str2, 5);
    int std_result2 = strncmp(str1, str3, 5);
    int std_result3 = strncmp(str1, str4, 2);
    int std_result4 = strncmp(str3, str4, 3);
    
    // Print the results
    printf("ft_strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str1, str2, 5, result1);
    printf("strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str1, str2, 5, std_result1);
    
    printf("ft_strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str1, str3, 5, result2);
    printf("strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str1, str3, 5, std_result2);
    
    printf("ft_strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str1, str4, 2, result3);
    printf("strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str1, str4, 2, std_result3);
    
    printf("ft_strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str3, str4, 3, result4);
    printf("strncmp result between \"%s\" and \"%s\" up to %d characters: %d\n", str3, str4, 3, std_result4);
    
    return 0;
}
