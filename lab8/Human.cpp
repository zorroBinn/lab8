#include "Human.h"

Human::Human()
{
    this->Age = 0;
    this->Name = L"test";
    this->Moneybalance = 1000;
    this->Sex = L"test";
}

Human::Human(Int32 age, String^ name, String^ sex)
{
    this->Age = age;
    this->Name = name;
    this->Sex = sex;
    this->Moneybalance = 1000;
}

Int32 Human::GetAge()
{
    return this->Age;
}

void Human::SetAge(Int32 age)
{
    this->Age = age;
}

Int32 Human::GetMoneybalance()
{
    return this->Moneybalance;
}

void Human::SetMoneyBalance(Int32 moneybalance)
{
    this->Moneybalance = moneybalance;
}

String^ Human::GetName()
{
    return this->Name;
}

void Human::SetName(String^ name)
{
    this->Name = name;
}

String^ Human::GetSex()
{
    return this->Sex;
}

void Human::SetSex(String^ sex)
{
    this->Sex = sex;
}

void Human::ChangeMoney(Int32 money)
{
    this->Moneybalance += money;
}

