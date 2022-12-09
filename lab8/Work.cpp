#include "Work.h"

Work::Work()
{
    throw gcnew System::NotImplementedException();
    this->Namework = "Безработный";
    this->Payment = 1500;
}

Work::Work(String^ namework, Int32 payment)
{
    throw gcnew System::NotImplementedException();
    this->Namework = namework;
    this->Payment = payment;
}

Int32 Work::GetPayment()
{
    return this->Payment;
}

void Work::SetPayment(Int32 payment)
{
    throw gcnew System::NotImplementedException();
    this->Payment = payment;
}

String^ Work::GetNamework()
{
    throw gcnew System::NotImplementedException();
    return this->Namework;
}

void Work::SetNamework(String^ namework)
{
    throw gcnew System::NotImplementedException();
    this->Namework = namework;
}
