#include "Realty.h"



Realty::Realty()
{
    throw gcnew System::NotImplementedException();
    this->Housing = "Гараж";
    this->Vehicle = "Велик";
}

String^ Realty::GetHousing()
{
    throw gcnew System::NotImplementedException();
    return this->Housing;
}

void Realty::SetHousing(String^ housing)
{
    throw gcnew System::NotImplementedException();
    this->Housing = housing;
}

String^ Realty::GetVehicle()
{
    throw gcnew System::NotImplementedException();
    return this->Vehicle;
}

void Realty::SetVehicle(String^ vehicle)
{
    throw gcnew System::NotImplementedException();
    this->Vehicle = vehicle;
}
