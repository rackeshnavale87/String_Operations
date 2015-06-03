#include <stdio.h>
#include <string.h>



int main()
{

/*
printf("##############################################################################################################################\n\n");

*/
/*
printf("##############################################################################################################################\n\n");

        // find the index of substring

    char s1[] = "Rakeshsharadnavalesharadsharadnavale";
    char sub[] = "sharad";    
    char *p = s1, *p1 = s1,*p2 = sub;
    int len1 = strlen(s1), len2 = strlen(sub),i=0,j=0;

    for (i = 0; i < len1; i++)
    {
        if(*p == *p2)
        {
            p1 = p;
            p2 = sub;
            for (j = 0; j < len2; j++)
            {
                if(*p1 == *p2)
                {
                    (p1)++;
                    (p2)++;
                }

                else
                    break;
            }
            p2 = sub;
            if(j == len2)
            printf("'%s' Found at index : [%d] of string '%s'\n",sub,i,s1);

        }
        (p)++;
    }

*/
/*
printf("##############################################################################################################################\n\n");

        // memchr(const *str, int c, size_t n) function implementation

void *nextpartof(char *str, int ch, size_t n)
{
    char *c;
    int i=0;
    c = str;
    while(*c != ch)
    {
        if(*c == ch)
            break;
        if(strlen(str) < i)
        {
            c = NULL;
            return c;
        }
        c++;i++;
    }
return c;
}

int main ()
{
    char str[] = "Rakesh";
    char ch, *ret = NULL;
    printf("Enter split character to search next string : ");
    scanf("%c",&ch);
    ret = nextpartof(str,ch,strlen(str));
    if (ret == NULL)
        printf("Remaining string : (null)\n");
    else    
        printf("Remaining string : (%s)\n",ret);
return 0;
}
*/
/*
printf("##############################################################################################################################\n\n");

   char str[] = "http://www.facebook.com#jj2342'42'%;fh2144dkuebkfdslvv.dfsg.grsdv.php";
   const char ch = '%';
   char *ret;
   ret = memchr(str, ch,strlen(str));
   printf("String after -->%c  is -\n-->%s\n", ch, ret++);

printf("##############################################################################################################################\n\n");
*/
  return(0);
}
