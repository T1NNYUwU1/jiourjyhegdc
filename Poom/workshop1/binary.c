#include <stdio.h>

int main()
{
    int base[]={128,64,32,16,8,4,2,1};

    int arr[8], result=0;
    for (int i=0; i<8; i++){
        scanf("%d", &arr[i]);
        result += arr[i]*base[i];
    }
    printf("%d", result);
    
    return 0;
}