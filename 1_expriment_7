#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define File  "students.txt"
#define Tempfile  "tempfile.txt"




typedef struct                                           //定义学生结构体。

{
    char id[20];
    char name[20];
    float chinese;
    float math;
    float english;
    float total;
} Student;


    Student students[100];                               //学生上线为100个。
    
    int student_count=0;

    void menu();
    void input_student();
    void find_student();
    void delete_student();
    void modify_student();

    void performance_rank();
    void head_count();
    void save_file();

    int main ()
{

    
    
    int choice;
    do 
    {
        menu();
	printf ("请输入你的选择");
	scanf("%d",&choice);

	switch(choice)
	{
         case 1:
             input_student();
	     break;
	 case 2:
	     find_student();
	     break;
	 case 3:
	     delete_student();
	     break;
	 case 4:
	     modify_student();
	     break;
	 case 5:
	     performance_rank();
	     break;
	 case 6:
	     head_count();
	     break;
	 case 7:
	     printf("正在保存，并退出\n");
	     
             goto End;
         
	 default:
	     printf ("输入错误，请重新输入\n") ;

	}

    }while(choice!=7);


End:
         return 0;


}
                           /////菜单函数/////

    void menu(){
    
	    printf("==========学生成绩管理系统==========\n");
	    printf("\n");
	    printf("||       1；录入学生信息           ||\n" );
	    printf("||       2：查找学生信息           ||\n" );
	    printf("||       3；删除学生信息           ||\n" );
	    printf("||       4；修改学生信息           ||\n" );
	    
	    printf("||       5；成绩排名               ||\n");
	    printf("||       6；人数统计               ||\n");
	    printf("||       7；退出                   ||\n");
	    printf("\n");
	    printf("=====================================\n");

    }
    
                         ///////成绩输入函数////////

    void input_student(){
	    FILE*file;
         
         char id[20];
         char name[20];
         float chinese;
         float math;
         float english;
         float total;



         printf ("请输入以下信息并回车\n");
	 printf("姓名");
	 scanf("%s",name);
	 printf("学号");
	 scanf("%s",id);
	 printf("语文成绩");
	 scanf("%f",&chinese);
	 printf("数学成绩");
	 scanf("%f",&math);
	 printf("英语成绩");
	 scanf("%f",&english);

         file = fopen(File,"a");

         if (file==NULL){printf("文件打开失败\n"); return; }
         

	 fprintf(file,"%s %s %2f %2f %2f \n",name,id,chinese,math,english);
	 fclose(file);
	 printf("保存成功\n");
    
    }


                          ///////查找学生信息//////////


    void find_student(){
	    FILE*file;
         
         char id[20];
         char name[20];
         float chinese;
         float math;
         float english;
         float total;
         int found=0;
	 char search[20];

	 printf("请输入你想要查找的人的姓名\n");
         scanf("%s",search);

	 file = fopen(File,"r");

          if (file==NULL){printf("文件打开失败\n"); return; }

	 while(fscanf(file,"%s %s %f %f %f",name,id,&chinese,&math,&english)!= EOF)
	 {
	     if(strcmp(name,search) == 0){ 

	             printf("以下是TA的信息\n"); 
		     printf("姓名：%s 学号：%s 语文成绩：%2f 数学成绩：%2f 英语成绩：%2f \n",name,id,chinese,math,english);
	             found=1;
	             break;
	     }
	 }
    
          fclose(file);         

	  if(!found){printf("未找到学生\n");return; }
	  
         }
                         /////////删除学生信息///////////

    void delete_student(){
	  FILE*file;
	  FILE * tempfile;
	  char id[20];
          char name[20];
          float chinese;
          float math;
          float english;
          float total;
          int found=0;
          char deleteName[20];

              printf("输入要删除的学生姓名: ");
              scanf("%s", deleteName);
            
              file = fopen(File, "r");
              tempfile = fopen(Tempfile, "w");
            if(file==NULL||tempfile==NULL){printf("打开文件失败\n");return;}
         
            while(fscanf(file, "%s %s %f %f %f", name,id, &chinese, &math, &english) != EOF) {
                if(strcmp(name, deleteName) == 0) {
                   printf("已删除: %s %s 语文:%2f 数学:%2f 英语:%2f\n",  name, id, chinese, math, english);
                   found = 1;
                  } 
		else {
     
                    fprintf(tempfile, "%s %s %2f %2f %2f\n", name, id, chinese, math, english);         //将非匹配学生写入tempFile
                     }   
                  }
            
            fclose(file);
            fclose(tempfile);
            
            remove(File);
            rename(Tempfile, File);
            
            if(!found){ printf("没找到要删除的学生\n");
        }else{printf("删除成功\n");}
                               
    }

                        /////////////修改学生信息//////////////

    void  modify_student(){


        FILE*file;
       	FILE *tempfile;

	 char id[20];
         char name[20];
         float chinese;
         float math;
         float english;
         float total;
         int found=0;
         char modify_Name[20];

              printf("输入要修改的学生姓名: ");
              scanf("%s", modify_Name);

              file = fopen(File, "r");
              tempfile = fopen(Tempfile, "w");
             
              if(file==NULL||tempfile==NULL){printf("打开失败\n"); return;}

            while(fscanf(file, "%s %s %f %f %f", name,id, &chinese, &math, &english) != EOF) {
       
		    if(strcmp(name, modify_Name) == 0) {
                   printf("已找到学生: %s %s 语文:%f 数学:%f 英语:%f\n",  name, id, chinese, math, english);
                   printf("请输入新的学生信息");
                   printf("姓名");
                   scanf("%s",name);
                   printf("学号");
                   scanf("%s",id);
                   printf("语文成绩");
                   scanf("%f",&chinese);
                   printf("数学成绩");
                   scanf("%f",&math);
                   printf("英语成绩");
                   scanf("%f",&english);
		   fprintf(tempfile,"%s %s %2f %2f %2f\n",name,id,chinese,math,english);
		   found=1;
                  }
		else{
		    fprintf(tempfile,"%s %s %2f %2f %2f\n",name,id,chinese,math,english);
                      
		}
                
                  }

            fclose(file);
            fclose(tempfile);

            remove(File);
            rename(Tempfile, File);

	    if(!found){
	              printf("未找到学生");
	    }
	    else {printf("修改成功");}



        }


            ///////////////排名///////////////////

    void performance_rank(){

	    FILE*file;
	    char id[20];
            char name[20];
            float chinese;
            float math;
            float english;
            float total;
            int found=0;         
            float count[100]={0}; 
	 char iname[100][20];
         int i=0;
	 int p;

	 file = fopen(File, "r");

         for(i=0;fscanf(file, "%s %s %f %f %f", name, id, &chinese, &math, &english) != EOF&&i<100;i++) {
		 count[i]=chinese+math+english;
                 strcpy(iname[i],name);
                

         }
	 fclose(file);

         for (int x = 0; x <i ; x++) {
         for (int y = 0; y <i ; y++) {
            if (count[y] < count[y + 1]) {
                
                float change = count[y];
                count[y] = count[y + 1];
                count[y + 1] = change;
               
		char temp_name[20];
		strcpy(temp_name,iname[y]);
		strcpy(iname[y],iname[y+1]);
		strcpy(iname[y+1],temp_name);
                
                }
             }
         }
         
	 printf("成绩排名如下\n");
	 for (p=0;p<i;p++){
	     
	     printf("第一名：%d 姓名：%s，分数：%2f\n", i+1,iname[p],count[p]);
	 
	 }

       }

                      ///////////数人/////////////

 
    void head_count(){
	 
	 FILE*file;
         char id[20];
         char name[20];
         float chinese;
         float math;
	 float english;
         float total;
         int z=0;

         file = fopen(File, "r");

	 while(fscanf(file, "%s %s %f %f %f", name, id, &chinese, &math, &english) != EOF){
	 
	 z++;
	 
	 }
         
	 fclose(file);

	 printf("学生人数为：%d\n",z);
    
    
    }
