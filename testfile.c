#include<stdio.h>

int main()
{
    int n;
    printf("How many elements are there in your array.");
    scanf("%d",&n);
    int a1[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Your array is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a1[i]);
    }
    
    return 0;
}