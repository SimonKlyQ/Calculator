#include "Ccalc.h"

Ccalc::Ccalc()	// Ĭ�Ϲ��캯��
	: _right(1), _left(0), _result(0)
{}

Ccalc::Ccalc(int right, int left)	// �Զ��幹�캯��
	: _right(right), _left(left), _result(0)
{
}
void Ccalc::Plus()	// ��
{
	this->_result = this->_left + this->_right;
}
void Ccalc::Sub()	// ��
{
	this->_result = this->_left - this->_right;
}
void Ccalc::Multi()	// ��
{
	this->_result = this->_left * this->_right;
}
void Ccalc::Divi()	// ��
{
	this->_result = this->_left / this->_right;
}
int Ccalc::ShowResult() // ��ʾ���
{
	return this->_result;
}