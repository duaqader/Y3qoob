/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

void ft_putstr(char *str)
{
    unsighned int i;
    i=0;
    while (str[i] != '\0')
    {
        write(1, &str[i],1);
        i++;
    }
}