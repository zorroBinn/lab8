#pragma once
using namespace System;

ref class Human
{
private:
	Int32 Age; //Возраст
	Int32 Moneybalance; //Игровой баланс
	String^ Name; //Имя
	String^ Sex; //Пол

public:
	Human(Int32 age, String^ name, String^ sex);
	Int32 GetAge();
	Int32 GetMoneybalance();
	String^ GetName();
	String^ GetSex();
	void ChangeMoney(Int32 money);
};

