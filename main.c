#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, add=0;

    scanf("%i", &n);

    for(i = 0; n > i; i++)
    {
        printf("%i %i %i PUM\n", add+1, add+2, add+3);
        add = add + 4;
    }
    system("pause");
    return 0;
}
