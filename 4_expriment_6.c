#include <stdio.h>

struct Student
{
    char name[20];
    int score;
};

int main() {
    struct Student student[3];
    struct Student *p = student;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("请输入第%d位学生姓名：\n", i + 1);
        scanf("%s", p->name);
        printf("请输入他/她的分数：\n");
        scanf("%d", &(p->score));
        p++;
    }

    printf("输入完毕\n");

    p = student;
    struct Student *max = p;

    for (i = 0; i < 3; i++)
    {
        if (p->score > max->score) {
            max = p;
        }
        p++;
    }

    printf("分数最高者为：%s，其分数为：%d\n", max->name, max->score);

    return 0;
}
