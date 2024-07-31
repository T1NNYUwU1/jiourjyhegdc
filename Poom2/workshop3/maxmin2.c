#include <stdio.h>
int main()
{
    int arr[10];
    int num1;
    int num2;
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    num1 = arr[0];
    num2 = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] < arr[i + 1]) // maximum
        {
            num1 = arr[i + 1];
        }
        if (arr[i] > arr[i + 1]) // minimum
        {
            num2 = arr[i + 1];
        }
    }
    printf("Maximum number: %d\n", num1);
    printf("Minimum number: %d", num2);
    return 0;
}