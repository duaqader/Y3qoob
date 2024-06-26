/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int ft_strlen(char *str)
{
    unsigned int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    write(1,i,1);
    
}