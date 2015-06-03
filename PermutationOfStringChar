#include <stdio.h>
#include <string.h>

        // Permutation of string characters

int count = 0;
void swap(char *x, char*y)
{
    char t;
    t = *x;
    *x = *y;
    *y = t;
}

void permute(char *a, int i, int n)
{
    int j;
    if (i==n)
    {
        printf("%s\n",a);
        count++;
    }
    else
    {
        for(j=i ; j<=n ; j++)
        {
            if(a+i != a+j)
            {
                swap((a+i),(a+j));
                permute(a,i+1,n);
                swap((a+i),(a+j));
            }
        }            
    }
}

int main ()
{
    char s1[] = "ABC";
    int n = strlen(s1);
    permute(s1,0,n-1);
    printf("Total permutations : %d\n",count);

return(0);
}
