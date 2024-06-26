/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

void ft_putnbr(int nb)
{
    unsigned int i;
    i = 0;
    while (nb[i] != '\0')
    {
        i++;
    }
  write(1, nb[i],1);
}
