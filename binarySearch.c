//#include<cs50.h> //Importing cs50 library
#include<string.h> //for getting string library for strlen
#include<ctype.h> //for getting islower isupper fuctions
#include<stdio.h>

int main(void)
{
    //Binary search is implemented on a set of numbers form 1 to 1000
    int i, a[1000];
    for (i = 0 ; i < 1000; ++i) //Loop for generating all the numbers for our list or dictionary
    {
        a[i] = i + 1;
    }
    printf("Enter a Number in range (1 to 1000) to search > ");
    int find; //find variable
    scanf("%d", &find);
    int po = -1; //Records iterations count
    int flag = 0; 
    int start = 0, mid = 500, end = 1000;
    
    if (find <= 1000 && find >= 0)
    {printf("Entered first if");
        while (flag == 0)
        {int f = 0; printf("Entered while %d ", f); f++;
            if (find < mid)
            {
                end = mid;
                mid /= 2;
            }
            else if (find > mid)
            {
                start = mid;
                mid /= 2;
            }
            if (mid == find)
            {
                flag = 1;
            }
        }
    }
}