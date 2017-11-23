#ifndef CCALC_H
#define CCALC_H

class Ccalc
{
public:
	Ccalc();	// 默认构造函数
	Ccalc(int right, int left);	// 自定义构造函数

	void Plus();	// 加
	void Sub();		// 减
	void Multi();	// 乘
	void Divi();	// 除
	void Mod();		// mod
	void ShowResult(); // 显示结果

private:
	int _right;		// 操作符右边的值
	int _left;		// 操作符左边的值
	int _result;	// 操作结果
};

#endif // !CCALC_H

