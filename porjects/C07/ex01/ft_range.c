#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *ft_range(int min, int max)
{
	int	i;
    int *data;
    int c;

    c = 0;
    i = min;
    if (min >= max)
        return (NULL);
    
    while (i < max)
        i++;
    i--;

    data = (int*)malloc(sizeof(int) * i);
    
    while (min <= i)
    {
        data[c] = min;
        min++;
        c++;
    }
     return (data);
}

int	main(void)
{
    int *b;
    int i;
    
    b = ft_range(1,5);
   while(i < 4)
    printf("%d",b[i++]);

}
