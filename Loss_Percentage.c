#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    double loss;
    loss=X-Y;
    double percentage;
    percentage=(loss*100)/X;
    printf("%.2lf",percentage);
}