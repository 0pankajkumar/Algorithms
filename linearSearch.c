//#include<cs50.h> //Importing cs50 library
#include<string.h> //for getting string library for strlen
#include<ctype.h> //for getting islower isupper fuctions
#include<stdio.h>

int main(void)
{
    //This searches for each element & gives result with position no. when its found
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    printf("~ ~ ~ Welcome ~ ~ ~!\nWe have a collectin of Prime numbers from 1 to 30\n");
    printf("Enter a prime Number in range to search > ");
    int find;
    scanf("%d", &find);
    int po = -1; //Records position
    
    for (int i = 0; i < 10 ; i++) //Loop for evaluation for entire array a[]
    {
        if (find == a[i])
        {
            po = i + 1;
        }
    }
    if (po < 0)
    {
        printf("\n\nFailure ! Result not found. Enter a Prime number (1-30) next time\n\nAborting...\n");
    }
    else
    {
        printf("\n\nSuccess !\nResult found at position no. %d\n\n", po);
    }
}

