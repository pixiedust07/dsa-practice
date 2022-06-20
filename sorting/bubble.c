#include <stdio.h>
#include <stdbool.h>

int flag = 0, i, j;

int bubbleSort(int array[], int size)
{
    int temp, swapped;
    do
    {
        swapped = false;
        for (i = 0; i < size; i++)
        {
            // traverse whole array < current iteration of the outer loop (i)
            //  since with each iteration the biggest element in the array will be bubbled up to the correct position, hence we don't need loop all the way (including the sorted elem) and just go up until before the last sorted element
            for (j = 0; j < (size - 1 - i); j++)
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    swapped = true;
                    // because if a swap occurs then we can assume that the array is not fully sorted and if the swapped remains false during an entire loop(outer loop) then it means that the array is fully sorted and no need to check remaining elements or none
                }
                printf("Inner-%d\n", j+1);
            }
                printf("\nOuter-%d\n\n", i+1);
        }
    } while (swapped);
    printf("Sorted Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void main()
{
    /*my way*/
    int array[10], size, elm;
    printf("Enter the size of the Array :");
    scanf("%d", &size);
    printf("Enter the Array elements :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, size);

    printf("\n");
}
