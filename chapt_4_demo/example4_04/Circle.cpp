//example4_03_Circle.cpp:表示圆类的实现
 #include "Circle.h"			//包含头文件
 double Circle::Area()		//求圆的面积
 {
	    Radius *= 2;
	 	return PI*Radius*Radius;
 }
 double Circle::Circumference()	//求圆的周长
 {
	 	return 2 * PI*Radius;
	 }
 double Circle::GetRadius()const	//常数据成员,获取半径值的实现代码
 {
	 Radius *= 2;
	 return Radius;
 }
