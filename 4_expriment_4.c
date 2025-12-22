#include<stdio.h>

    int my_strlen(char*str)
                 {
		    int count=0;
		    while (*str != '\0')
		    {
		        str++;
			count++;
		    }

		    return count;

		 }

    int main()
{
    char str[999];

    printf("请输入字符串");

    scanf ("%s",str);

    int length = my_strlen(str);

    printf("你所输入的字符串的长度为：%d\n",length);

    return 0;
}
