//example4_03.cpp':定义主函数,定义对象并调用相应函数
#include<iostream>	//包含系统文件
#include<Windows.h>
using namespace std;
#include "Circle.h"			//包含自定义头文件
int main()
{
	Circle c1(3.5), c2;
	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;
	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c2.Circumference() << endl;
	system("pause");
	return 0;
}