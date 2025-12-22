#include<stdio.h>

    int main ()
{
    int year;
    int month;

    printf("请输入年份");
    scanf ("%d",&year);
    month =1;
    for (month = 1;month<=12;month++){

    int x = year%100;
    int y = x/12;
    int z = x%12;
    int v = z/4;
    int w = y+z+v;
    int u = w%7;

    int c;
    int a;

    int length;
    if (month==1){length=0;c=31;}
    if (month==2){length=31;c=28;}
     if (month==3){length=59;c=31;}
      if (month==4){length=90;c=30;}
       if (month==5){length=120;c=31;}
        if (month==6){length=151;c=30;}
         if (month==7){length=181;c=31;}
          if (month==8){length=212;c=31;}
           if (month==9){length=243;c=30;}
            if (month==10){length=273;c=31;}
             if (month==11){length=304;c=30;}
              if (month==12){length=334;c=31;}
               if (year%4==0,month>=3){length=length+1;}
                if (year%4==0){c=29;}

    int day = 1;
    int i = length+day;
    int j = i%7;
    int k = j+u+5;
    int l = k%7;
    int A[7]={0,1,2,3,4,5,6};

    int B[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};

    void printspace(int n){for (n=0;n<l;n++){printf("        ");}}      //这里定义了空格输出函数

    printf("                 %d年 %d月            \n",year,month);

    printf("   周日    周一    周二    周三    周四    周五    周六\n");

    printspace(l);

    int b;
    int d=0;

    b=l*6;

    for(int a=0;a<7;a++){printf ("   %d    ",B[a]);b=b+6;d = d+1; if(b>=39){printf("\n"); b=0;}}

    for(a=d+1;a<c;a++){printf ("   %d   ",B[a]);b=b+6;if(b>=39){printf("\n"); b=0;}}

    printf("\n");
    printf("\n");
    }

    return 0;


}

