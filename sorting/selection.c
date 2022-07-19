#include <stdio.h>

int i, j;

void selectionSort(int array[], int size)
{
    int assumedMinimum, temp;

    for(i = 0; i < size; i++) {
        assumedMinimum = i;
        for(j =i + 1; j < size; j++) { 
            if(array[assumedMinimum] > array[j] ) {
                assumedMinimum = j; 
            }
        }
        temp = array[i];
        array[i] = array[assumedMinimum];
        array[assumedMinimum] = temp;
    }

    printf("Sorted Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void main()
{

    int array[10], size, elm;
    printf("Enter the size of the Array :");
    scanf("%d", &size);
    printf("Enter the Array elements :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    selectionSort(array, size);

    printf("\n");
}
