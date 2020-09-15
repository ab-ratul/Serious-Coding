//Using while loop:
#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter the range number: ");
    scanf("%d", &n);

    i=1;
    while(i <= n)
{
    printf("%d\n", i);
    ++i;
}
    return 0;
}

/*Using For loop:

#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter the range number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
{    
    printf("%d\n", i);
}
    return 0;
}
*/
