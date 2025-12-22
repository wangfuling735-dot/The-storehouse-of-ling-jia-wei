#include<stdio.h>
 
    int main ()
{
    int year;
    int month;
    int day;

    printf("我能通过年月日，算出今天是周几，那么，请先输入年份（仅支持1000年后的年份）\n");
    scanf("%d",&year);

    printf("请输入月份\n");
    scanf("%d",&month);

    printf("请输入日期\n");
    scanf("%d",&day);

    int x = year%100;
    int y = x/12;
    int z = x%12;
    int v = z/4;
    int w = y+z+v;
    int u = w%7;

    int length;
    if (month==1){length=0;}
    if (month==2){length=31;}
     if (month==3){length=59;}
      if (month==4){length=90;}
       if (month==5){length=120;}
        if (month==6){length=151;}
	 if (month==7){length=181;}
	  if (month==8){length=212;}
	   if (month==9){length=243;}
	    if (month==10){length=273;}
	     if (month==11){length=304;}
	      if (month==12){length=334;}
	       if (year%4==0,month>=3){length=length+1;}
	       
    int i = length+day;
    int j = i%7;
    int k = j+u+5;
    int l = k%7;
    int A[7]={0,1,2,3,4,5,6};
    
    printf ("你所输入日期的星期是：星期%d",A[l]);
    printf ("\n");
    return 0;
}
