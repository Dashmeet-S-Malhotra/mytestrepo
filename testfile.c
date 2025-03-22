#include<stdio.h>

int main()
{
    int n,a;
    printf("How many elements are there in your array.");
    scanf("%d",&n);
    int a1[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a1[i]);
    }
    int half = n/2;
    for (int i = 0; i < half; i++)
    {
        a=a1[i];
        a1[i]=a1[n-i-1];
        a1[n-i-1]=a;
    }
    printf("Your array in reverse is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a1[i]);
    }
    printf("Having fun with git");
    printf("Do you like it");
    return 0;
}