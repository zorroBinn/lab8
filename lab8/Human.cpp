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

Int32 Human::GetMoneybalance()
{
    return this->Moneybalance;
}

String^ Human::GetName()
{
    return this->Name;
}

String^ Human::GetSex()
{
    return this->Sex;
}

void Human::ChangeMoney(Int32 money)
{
    this->Moneybalance += money;
}

