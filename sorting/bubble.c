#include <stdio.h>

int flag = 0, i, j;
//try it with recursion

int bubbleSort(int array[], int size)
{
    int temp;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size-1; j++) {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        
    }
    printf("Sorted Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
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

