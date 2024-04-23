#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    int i,t,k;
    scanf("%[^\n]s",a);
    t=strlen(a);
    for(i=0;i<t;)
    {
        if((a[i]==' ')&&(a[i+1]==' '))
        {
            for(k=i+1;k<t;k++)
            {
                a[k]=a[k+1];
            }
            t=t-1;
        }
        else
            i++;
    }
    printf("%s",a);
    return 0;
}
