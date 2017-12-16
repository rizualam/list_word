#include <stdio.h>
int main(int argc, char *argv[])
{
    char a[100];
    int i=0,count=1;
    printf("enter the sentence\n");
    gets(a);
    if(a[i]=='\0')
    {
    count=0;
    }
    else{
        while (a[i]!='\0')
        {
            if (a[i]==' ')
            {
                count++;
            }
            i++;
        }
    }

    printf("no.of words in sentence=%d",count);
    return 0;
}
