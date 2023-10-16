#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    double profit;
    profit=Y-X;
    double percentage;
    percentage=(profit*100)/X;
    printf("%.2lf", percentage);

 
}