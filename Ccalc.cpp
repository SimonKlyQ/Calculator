#include "Ccalc.h"

Ccalc::Ccalc()	// 默认构造函数
	: _right(1), _left(0), _result(0)
{}

Ccalc::Ccalc(int right, int left)	// 自定义构造函数
	: _right(right), _left(left), _result(0)
{
}
void Ccalc::Plus()	// 加
{
	this->_result = this->_left + this->_right;
}
void Ccalc::Sub()	// 减
{
	this->_result = this->_left - this->_right;
}
void Ccalc::Multi()	// 乘
{
	this->_result = this->_left * this->_right;
}
void Ccalc::Divi()	// 除
{
	this->_result = this->_left / this->_right;
}
int Ccalc::ShowResult() // 显示结果
{
	return this->_result;
}