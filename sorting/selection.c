#include <stdio.h>
#include <stdbool.h>

int flag = 0, i, j;

int selectionSort()
{

    //two loops are correct
    int array[10] = {1, 4, 5, 9}, size = 4;
    int currentMinimumIndex = 0, currentItemIndex = 0, temp;
    //in the end of the loop swap currentMinimumIndex with currentItemIndex

    for(i = 0; i < size; i++) {
        currentMinimumIndex = i;
        printf("\n\nCurrentMinimumIndex = %d\n", currentMinimumIndex);
        for(j =i + 1; j < size; j++) { // ✔
            currentItemIndex = j; // ✔
            printf("\nCurrentItemIndex = %d \n", currentItemIndex);
            printf("\n --Before if-- \nCurrentMinimumIndex = %d = currentItemIndex = %d", currentMinimumIndex, currentItemIndex);
            if(array[currentMinimumIndex] > array[j] ) {
                currentMinimumIndex = currentItemIndex; // current lower element // ✔
                printf("\n --inside if-- \nCurrentMinimumIndex = %d = currentItemIndex = %d", currentMinimumIndex, currentItemIndex);
            }
            printf("\n --After if-- \nCurrentMinimumIndex = %d = currentItemIndex = %d", currentMinimumIndex, currentItemIndex);

            printf("\n ------------inside loop end-----------\n");
        }
        //temp = array[i];
        //array[i] = array[currentMinimumIndex]; // ✔
        //array[currentItemIndex] = temp;
        printf("\n --outside loop - in [i = %d]\n", i);
    }

    printf("Sorted Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void main()
{

    //int array[10], size, elm;
    //printf("Enter the size of the Array :");
    //scanf("%d", &size);
    //printf("Enter the Array elements :");
    //for (i = 0; i < size; i++)
    //{
    //    scanf("%d", &array[i]);
    //}

    selectionSort();

    printf("\n");
}
