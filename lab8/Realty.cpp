#include "Realty.h"



Realty::Realty()
{
    
    this->Housing = L"�����";
    this->Vehicle = L"�����";
}

String^ Realty::GetHousing()
{
    
    return this->Housing;
}

void Realty::SetHousing(String^ housing)
{
    
    this->Housing = housing;
}

String^ Realty::GetVehicle()
{
    
    return this->Vehicle;
}

void Realty::SetVehicle(String^ vehicle)
{
    
    this->Vehicle = vehicle;
}
