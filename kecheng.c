#include <stdio.h>
#include <string.h>

/*1.字符比较
int main()

{
    //int strcmp(const char*str1,const char*str2);

int ret;
ret = strcmp("1234","123");
printf("%d\n",ret);
//返回为1，大于0，说明前面大于后面
//‘a的ascall码是97，
//若返回为0，则相等
//比较的是每一个字符的ascall码
    return 0;
}*/

/*2.将字符存放入数组中
int main()
{
    int ret;
    char str[15] = {"1"};
    printf("1,str:%s\n",str);
    //未存放之前
    strcpy(str,"hello world.");
    printf("2,str:%s\n",str);
    //存放之后
    //存放不能超出数组，会越界存储与越界访问
    return 0;
}*/

/*3.复制字符串
int main（）
{
    int ret
    char str[2] = {"1"};
    char dst[13] = {"151551"}
    printf ("1.str:%s\n",str);

    strcpy(str,"hello");

    printf("2.str:%s\n",str);

    return 0;
}*/

/*4.*/
int main()
{
    char *ret;//定义指针变量，即定义地址变量，
    //用以存储地址（16进制值）
    ret = strstr("13213513215313","213");

    printf("找到字符串的位置为：%c\n",*ret);
    //*:解析地址变量，找到里面的地址对应的空间
    //再以%c把空间的数据打印出来
    printf("%s\n",ret);
    //根据ret这个位置，
    //以%s的格式打印ret位置后面的字符串

}