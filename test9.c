#include <stdio.h>

 int dol(int n)
{
    if(n==0)
        return 0;
    else
        return n%10 + dol((n-n%10)/10);
}

int main(void)
{
    int c;
    scanf("%d", &c);
    printf("%d", dol(c));
}