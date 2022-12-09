#include "MedicalCard.h"

MedicalCard::MedicalCard()
{
    throw gcnew System::NotImplementedException();
    this->Weight = 0;
    this->Height = 0;
    this->HealthStatus = 100;
}

MedicalCard::MedicalCard(Int32 Weight, Int32 Height)
{
    throw gcnew System::NotImplementedException();
    this->Weight = Weight;
    this->Height = Height;
    this->HealthStatus = 100;
}

Int32 MedicalCard::GetWeight()
{
    return this->Weight;
}

void MedicalCard::SetWeight(Int32 weight)
{
    throw gcnew System::NotImplementedException();
    this->Weight = weight;
}

Int32 MedicalCard::GetHeight()
{
    return this->Height;
}

void MedicalCard::SetHeight(Int32 height)
{
    throw gcnew System::NotImplementedException();
    this->Height = height;
}

Int32 MedicalCard::GetHealthStatus()
{
    return this->HealthStatus;
}

void MedicalCard::DownStatus()
{
    throw gcnew System::NotImplementedException();
    if (this->HealthStatus > 0) {
        this->HealthStatus -= 5;
        if (this->HealthStatus < 0) {
            this->HealthStatus = 0;
        }
    }
}

void MedicalCard::UpStatus()
{
    throw gcnew System::NotImplementedException();
    if (this->HealthStatus < 100) {
        this->HealthStatus += 30;
        if (this->HealthStatus > 100) {
            this->HealthStatus = 100;
        }
    }
}
