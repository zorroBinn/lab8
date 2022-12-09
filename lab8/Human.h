#pragma once
using System::String;
using System::Int32;

ref class Human
{
private:
	Int32 Age; //Возраст
	Int32 Moneybalance; //Игровой баланс
	String^ Name; //Имя
	String^ Sex; //Пол

public:
	Human();
	Human(Int32 age, String^ name, String^ sex);
	Int32 GetAge();
	Int32 GetMoneybalance();
	String^ GetName();
	String^ GetSex();
	void ChangeMoney(Int32 money);
};

