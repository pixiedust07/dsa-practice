#include <stdio.h>
#include <stdbool.h>

int flag = 0, i, j;

int selectionSort(int array[], int size)
{
    int currentMinimumIndex = 0, currentItemIndex = 0, temp;

    for(i = 0; i < size; i++) {
        currentMinimumIndex = i;
        for(j =i + 1; j < size; j++) { 
            currentItemIndex = j;
            if(array[currentMinimumIndex] > array[j] ) {
                currentMinimumIndex = currentItemIndex; 
            }
        }
        temp = array[i];
        array[i] = array[currentMinimumIndex]; // ✔
        array[currentMinimumIndex] = temp;
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
