//#include<cs50.h> //Importing cs50 library
#include<string.h> //for getting string library for strlen
#include<ctype.h> //for getting islower isupper fuctions
#include<stdio.h>
#include<stdlib.h> // For exit(0);

int main(void)
{
    //Binary search is implemented on a set of numbers form 1 to 1000
    int i = 0;
    printf("Enter a Number in range (1 to 1000) to search > ");
    int find; //find variable
    scanf("%d", &find);
    int start = 0, mid = 500, end = 1000;
    
    while (start <= end)
    {printf("Mid is %i \n", mid);
        i++;
        if (find < mid)
        {
            end = mid - 1;
        }
        else if (find == mid)
        {
            
            printf("Number Found at %i", i);
            break;
        }
        else
        {
            start = mid + 1;
        }
        
        mid = (start + end) / 2;
    }
}