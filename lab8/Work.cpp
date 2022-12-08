#include "Work.h"

Int32 Work::GetPayment()
{
    return this->Payment;
}

String^ Work::GetNamework()
{
    throw gcnew System::NotImplementedException();
    return this->Namework;
}
