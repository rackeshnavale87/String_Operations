#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int maxlen=0;
char *buffer,maxchar;

void reverse_str(char *s, int len) 
{
    int i, j;
    char c;
    for (i = 0, j = len-1; i < j; ++i, --j) 
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
char* itoa(int n, char *s) 
{
    int i = 0, sign = n;
    do 
    {    s[i++] = abs(n % 10) + '0';    } 

    while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse_str(s, i);
    return s;
}

int compress(char *s1)
{
    int i=0, j=0, count =1, cnt = 0;
    char c[10];
    printf("--------------\nGiven string : %s\n",(s1));
    printf("String length: %d\n-------------------------\n",strlen(s1));

    for(j=0;j<strlen(s1);j++)
    {
        count = 0;
        if(s1[j]=='\0')
            break;
        while(s1[j] == s1[j+1])
        {
            j++;count++;
        }
        if(count > 1)
        {
            s1[i] = s1[j];i++;
            itoa(count+1,c);
            for(cnt = 0;cnt<strlen(c);cnt++)
                s1[i++] = c[cnt];
        }
        else
        {
            s1[i] = s1[j];i++;
        }
    }
    s1[i] = '\0';

    printf("Given string Compressed : ");
    for(j=0;j<strlen(s1);j++)
    printf("%c",s1[j]);
    printf("\nString Compressed length: %d\n-------------------------\n\n",strlen(s1));
return maxlen;
}
// MAIN Function------------------------------------------------------------------------------
int main(int argc, char* argv[]) 
{
    char buf[1024];
    char *p;
    printf ("Please enter text,[Note - at max %d characters]\n", sizeof(buf));
    if (fgets(buf, sizeof(buf), stdin) != NULL)
    {
        if ((p = strchr(buf, '\n')) != NULL)
        *p = '\0';
    }
    compress(buf);// COMPRESS FUNCTION CALL!!!
    return 1;
}
