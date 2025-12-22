#include<stdio.h>

    int main ()
{
START:
    FILE*file;
    int Seat[10][10];
    int a,b,c,d;
    char e;
    int count=0;

    file=fopen("seat.txt","r");   
    if (file!=NULL){                                           //读取座位表
       for (a=0;a<10;a++)
       {
       for (b=0;b<10;b++)
       {
           fscanf(file,"%d",&Seat[a][b]);
       }
       }
       fclose(file);
       }
       else{
	    for (a=0;a<10;a++)
       {
            for (b=0;b<10;b++)
       {
           Seat[a][b]=0;
       }
       }
       }

       for (a=0;a<10;a++)                                      //输出座位表
       {
	  
           for (b=0;b<10;b++)
       {
           if(Seat[a][b]==0){printf(" □ ");}
	   else{printf(" ■ ");}
       }
	   printf("\n");
       }
SELECT:
       printf("请您挑选座位，以行+列的形式输入，票价30元\n");
       scanf("%d",&c);
       scanf("%d",&d);

       if(c<1||c>10||d<1||d>10){printf("出现错误，请正确输入\n");}

       c=c-1;
       d=d-1;

       if(Seat[c][d]==1){printf("该座位已经有人预定，请重新挑选\n"); goto SELECT;}
       else {Seat[c][d]=1;printf("选座成功，您已经预定了 %d 行，%d 列的位置",c+1,d+1);
       count++;

       }

       file=fopen("seat.txt","w");
            for (a=0;a<10;a++)
       {
            for (b=0;b<10;b++)
       {
            fprintf(file," %d ",Seat[a][b]);
       }
            fprintf(file,"\n");
       }
       
       fclose(file);
       printf("保存成功\n");       
CONTINUE:
       printf("是否继续选座，Y/N\n");
       scanf(" %c",&e);
       if(e=='Y'||e=='y'){goto START;}
       else {if (e=='N'||e=='n'){goto END;}
	       else{printf("输入错误，请重新输入\n");  goto CONTINUE;}
       }
END:
       printf("最终价格为 %d",count*30);
       return 0;

}
