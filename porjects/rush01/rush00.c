/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <joeperinchery@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:42:21 by jperinch          #+#    #+#             */
/*   Updated: 2022/05/28 11:42:24 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
static int data[16];

int *charToInt()
{
    char numbers[]="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    int i =0;
    int x = 1;
    int c=1;
    //data[16];

    while(numbers[i]!='\0')
    {
         if((numbers[i]!=' ' ) && i<8 && i>=0 || numbers[i]!=' ' && i>15 &&i<28)
        {
            data[x]=(int)numbers[i]-'0';
            x++;
            if(x<=16 ||x>8&&x<16)
            {
            data[x]=  (int)numbers[i+8]-'0';
            x++;
            }
        }
        i++;
    }
    return data;
}
void    rush();

int main(void)
{

   rush();

}
void  change(int darray[1])
{
    //printf("%d ",darray[1]);
}
void  colcheck(int *data,  int darray[5][5])
{
    int r=1;
    int c=1;
    int numb;

    while (c <= 4)
        {
            r = 1;
            while (r <= 4)
            {
                numb= r+1;
                while(numb<=4)
                {
                        if(darray[r][c]==darray[numb][c])
                        {
                            int check[]={r,c};
                            change(check);
                        }
                    numb++;
                }

                r++;
            }
            c++;
        }

}

void    rush()
{
    int *data= charToInt();
    int r;
    int c;
    static int darray[5][5];
    int i;
    int x;
    int error;

    error=0;
    x=5;
    i=9;
    r = 1;

    while(r<=4)
    {
        if(i<=15)
        {
            if(data[i] == 4 && data[i+1] ==1)
            {
                darray[r][1]=1;
                darray[r][2]=2;
                darray[r][3]=3;
                darray[r][4]=4;
            }
            else if(data[i] == 1 && data[i+1] ==4)
            {
                darray[r][1]=4;
                darray[r][2]=3;
                darray[r][3]=2;
                darray[r][4]=1;
            }
           else if(data[i] == 1 && data[i+1] ==2 )
            {
                darray[r][1]=4;
                darray[r][2]=2;
                darray[r][3]=1;
                darray[r][4]=3;
            }
            else if(data[i] == 1 && data[i+1] ==3 )
            {
                darray[r][1]=4;
                darray[r][2]=3;
                darray[r][3]=1;
                darray[r][4]=2;
            }
            else if(data[i] == 2 && data[i+1] == 1)
            {
                darray[r][1]=3;
                darray[r][2]=1;
                darray[r][3]=2;
                darray[r][4]=4;
            }
           else if(data[i] == 2 && data[i+1] == 2)
            {
                darray[r][1]=3;
                darray[r][2]=4;
                darray[r][3]=1;
                darray[r][4]=2;
            }
            else if(data[i] == 2 && data[i+1] == 3)
            {
                darray[r][1]=3;
                darray[r][2]=4;
                darray[r][3]=2;
                darray[r][4]=1;
            }
            else if(data[i] == 3 && data[i+1] == 1)
            {
                darray[r][1]=2;
                darray[r][2]=1;
                darray[r][3]=3;
                darray[r][4]=4;
            }
            else if(data[i] == 3 && data[i+1] == 2)
            {
                darray[r][1]=1;
                darray[r][2]=2;
                darray[r][3]=4;
                darray[r][4]=3;
            }
            else
            {
                error=1;
            }
        i+=2;
        }

        r++;
    }
    colcheck(data, darray);
    int ro=1;
    int co;
   while (ro <= 4)
        {
            co = 1;
            while (co <= 4)
            {
                printf("%d",darray[ro][co]);
                if(co==4)
                    printf("\n");
                co++;
            }
            ro++;
        }
}