//example4_03_Circle.cpp:表示圆类的实现
#include "Circle.h"			//包含头文件
double Circle::Area()		//求圆的面积
{
	return PI*Radius*Radius;
}
double Circle::Circumference()	//求圆的周长
{
	return 2 * PI*Radius;
}