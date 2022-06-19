#include <stdio.h>

int flag = 0, idx;

int linearSearch(int array[], int size, int target)
{
    for (idx = 0; idx < size; idx++)
    {
        if (array[idx] == target)
        {
            flag = 1;
            return idx + 1;
        }
    }
    return -1;
}

void main()
{
    /*my way*/
    int array[10], size,  elm;
    printf("Enter the size of the Array :");
    scanf("%d", &size);
    printf("Enter the Array elements :");
    for (idx = 0; idx < size; idx++)
    {
        scanf("%d", &array[idx]);
    }
    printf("Enter the element to be searched :");
    scanf("%d", &elm);

    int pos = linearSearch(array, size, elm);
    // linearSearch(array, elm);
    if(flag == 1) {
        printf("%d was found at position %d. Search Successful!", elm, pos);
    } else {
        printf("%d was not found. Search Unsuccessful!", elm);
    }

    printf("\n");
}
