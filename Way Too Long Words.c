#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, k;
    char x[100];
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        gets(x);
        k=strlen(x);
        if(k>10)
        {
            printf("%c%d%c\n", x[0], k-2, x[k-1]);
        }
        else
            printf("%s\n", x);
    }
    return 0;
}
