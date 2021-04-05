#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,w;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        if(b<50)
        {
            c=a-b;
            w=b*90+c*60;
            printf("%d",w);
        }
        else{
        c=a-b;
            w=b*80+c*60;
                        printf("%d",w);

        }
    }
    else
    {
         if(a<50)
        {
            c=b-a;
            w=a*90+c*45;
                        printf("%d",w);

        }
        else{
        c=b-a;
            w=a*80+c*45;
                        printf("%d",w);

        }
    }
    return 0;
    }
