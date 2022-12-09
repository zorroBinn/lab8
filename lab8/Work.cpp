#include "Work.h"

Work::Work()
{
    
    this->Namework = L"Безработный";
    this->Payment = 1500;
}

Work::Work(String^ namework, Int32 payment)
{
    
    this->Namework = namework;
    this->Payment = payment;
}

Int32 Work::GetPayment()
{
    return this->Payment;
}

void Work::SetPayment(Int32 payment)
{
    
    this->Payment = payment;
}

String^ Work::GetNamework()
{
    
    return this->Namework;
}

void Work::SetNamework(String^ namework)
{
    
    this->Namework = namework;
}
