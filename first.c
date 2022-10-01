#include <stdio.h>	//预处理指令。
int main(void) {	/*	C程序一定main()函数开始执行。
							int表示函数返回的值是整数。
							圆括号内包含一些传入函数的信息。*/

	int num;	//声明。int是关键字，num是标识符。
	num = 1;	//赋值。

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n",num);	//%d是占位符。
	
	return 0;
}

/*	1、命名要有意义。实在无法表达需在旁边注释。
	2、命名可用大小写字母、数字、下划线_。不可用数字开头。
	3、命名时尽量不以下划线开头。
	4、C语言区分大小写*/