#include<stdio.h> //For printf
#include<stdlib.h> // For exit(0);
void swap(int, int); //To swap values
void printArr(); //To print array data

int a[] = {14, 33, 27, 10, 35, 19, 42, 44}; //Global declaration of Array

int main(void)
{
    //Insertion sort is implemented over an array
    //int a[] = {14, 33, 27, 10, 35, 19, 42, 44};
    //printf("Enter a Number to search in the array [14, 33, 27, 10, 35, 19, 42, 44] > ");
    //int find; //find variable
    //scanf("%d", &find);
    
    for (int i = 0; i < 8; i++)
    {
        if ((a[i] > a[i+1]) && (i+1) < 8)
        {
            swap(i, i+1);
            printArr();
            for (int j = i; j >= 0; j--)
            {
                if ((a[j-1] > a[j]) && (j-1) >= 0)
                {
                    swap(j-1, j);
                }
                printArr();
            }
        }
        
    }
}

void swap(int m, int n)
{
    int temp = a[m];
    a[m] = a[n];
    a[n] = temp;
}

void printArr()
{
    printf("\n");
    for (int i = 0; i < 8; i++)
        printf("%i, ", a[i]);
}