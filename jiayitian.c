#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
switch(b)
{
case 1:
    {
if(c==31)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

    break;
    }
case 2:
    {

    if(((a%4==0)&&(a%100!=0))||(a%400==0))
        if(c==29)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}


    else
if(c==28)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

    }
        break;

case 3:{
if(c==31)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

            break;
}

case 4:{
if(c==30)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

            break;
}

case 5:{
if(c==31)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

            break;
}

case 6:
if(c==30)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

                break;


case 7:
    {
if(c==31)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

            break;
    }

case 8:
    {

if(c==31)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

            break;
    }
case 9:
    {
if(c==30)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

                break;
}


case 10:
    {
if(c==31)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

            break;
    }

case 11:{
if(c==30)
{
    ++b;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}

                break;
}
case 12:
    {
if(c==31)
{
    ++a;
    b=1;
    c=1;
    printf("%d %d %d",a,b,c);
}
else
{
    ++c;
    printf("%d %d %d",a,b,c);
}
                break;
    }

        return 0;



}
}


