#include "stdio.h"      /*编译预处理指令，说明后面用到的函数*/



int main( )              //入口函数

{	

    int a, b, c, sum;        //分号代表一个语句的结束



  	a=1;

	b=10;

	c=2;

	sum=(a+b)*(b/c);

    	printf("%d",  sum);           //输出结果，调用了输出函数

    return 0;

}
