#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        printf("%d\n",i*i);
    }
    return 0;
}