#ifndef CCALC_H
#define CCALC_H

#include <iostream>

class Ccalc
{
public:
	Ccalc();	// Ĭ�Ϲ��캯��
	Ccalc(int right, int left);	// �Զ��幹�캯��

	void Plus();	// ��
	void Sub();		// ��
	void Multi();	// ��
	void Divi();	// ��
	void Mod();		// mod
	int ShowResult(); // ��ʾ���

private:
	int _right;		// �������ұߵ�ֵ
	int _left;		// ��������ߵ�ֵ
	int _result;	// �������
};

#endif // !CCALC_H

