#pragma once
using namespace System;

ref class Human
{
private:
	Int32 Age; //�������
	Int32 Moneybalance; //������� ������
	String^ Name; //���
	String^ Sex; //���

public:
	Human(Int32 age, String^ name, String^ sex);
	Int32 GetAge();
	Int32 GetMoneybalance();
	String^ GetName();
	String^ GetSex();
	void ChangeMoney(Int32 money);
};

