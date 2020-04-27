#include<stdio.h>
int leapyear(int yr)
{
    if((yr%4==0 && yr%100!=0) || yr%400==0)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    int yr,lp;
    scanf("%d",&yr);
    lp=leapyear(yr);
    if(lp==1)
    printf("%d is a leap year",yr);
    else
    printf("%d is not a leap year",yr);
    
    
	
	
	
	return 0;
}
