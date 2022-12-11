#pragma once
using System::String;
using System::Int32;

ref class Human
{
private:
	Int32 Age; //�������
	Int32 Moneybalance; //������� ������
	String^ Name; //���
	String^ Sex; //���
	Int32 Level;

public:
	Human();
	Human(Int32 age, String^ name, String^ sex);
	Int32 GetAge();
	void SetAge(Int32 age);
	Int32 GetMoneybalance();
	void SetMoneyBalance(Int32 moneybalance);
	String^ GetName();
	void SetName(String^ name);
	String^ GetSex();
	void SetSex(String^ sex);
	Int32 GetLevel();
	void SetLevel(Int32 level);
	void LevelUp();
	void ChangeMoney(Int32 money);
};

