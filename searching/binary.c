#include <stdio.h>

int i, flag = 0;

int binarySearch(int array[], int size, int target)
{
    int start = 0, end = size, mid = 0;
    printf("initiating binary Search...\n");
    printf("\n");
    for (i = 0; i < size; i++) {
        while (start <= end) {
            mid = (start + end) / 2;
            if (target == array[mid]) {
                flag = 1;
                return (mid+1);
            } else if (target < array[mid]) {
                end = mid - 1;
            } else if (target > array[mid]) {
                start = mid + 1;
            }
        }
    }

   return -1;
}

void main()
{
    /*my way*/
    int array[10], size, elm;
    printf("Enter the size of the Array :");
    scanf("%d", &size);
    printf("Enter the Array elements :");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("\nArray elements : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter the element to be searched :");
    scanf("%d", &elm);
    //int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int pos = binarySearch(array, size, elm);
    if (pos == -1)
    {
        printf("%d was not found!", elm);
    }
    else
    {
        printf("%d was found at position %d", elm, pos);
    }

    printf("\n");
}
