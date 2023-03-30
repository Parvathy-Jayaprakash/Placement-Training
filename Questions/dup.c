#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int size, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i] = count;
        }
    }

    printf("\nDuplicate elements in the array: \n");
    for(i=0; i<size; i++)
    {
        if(freq[i]>1)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
