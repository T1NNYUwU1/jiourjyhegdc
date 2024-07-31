#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of value: ");
    scanf("%d", &n);

    int arr[n];
    int count[101] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if ((arr[i] > 0) && (arr[i] <= 100))
            count[arr[i]]++;
    }

    printf("Value\t\tFrequency\n");
    for (int j = 0; j < 100; j++)
    {
        if (count[j] > 0)
            printf("%4d\t\t%4d times\n", j, count[j]);
    }
    return 0;
}