#define _CRT_SECURE_NO_WARNINGS 1


//表达式1
//a* b
//c* d
//a* b + c * d
//e * f
//a * b + c * d + e * f

//a*b
//c* d
//e* f
//a* b + c * d
//a * b + c * d + e * f


//表达式2
//c + --c;


//表达式3
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}


//表达式4
//#include <stdio.h>
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}



//表达式5
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}


//尝试在linux环境gcc编译器，VS2013环境下都执⾏，看结果。



//总结
//即使有了操作符的优先级和结合性，我们写出的表达式依然有可能不能通过操作符的属性确定唯⼀的
//计算路径，那这个表达式就是存在潜在⻛险的，建议不要写出特别复杂的表达式。