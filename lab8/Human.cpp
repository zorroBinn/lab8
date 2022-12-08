#include "Human.h"

Human::Human(Int32 age, String^ name, String^ sex)
{
    throw gcnew System::NotImplementedException();
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
    throw gcnew System::NotImplementedException();
    return this->Name;
}

String^ Human::GetSex()
{
    throw gcnew System::NotImplementedException();
    return this->Sex;
}

void Human::ChangeMoney(Int32 money)
{
    throw gcnew System::NotImplementedException();
    this->Moneybalance += money;
}

