#include "Clothes.h"

Clothes::Clothes(String^ Body, String^ Pants, String^ Shoes, Int32 ClothesStatus)
{
    throw gcnew System::NotImplementedException();
    this->Body = Body;
    this->Pants = Pants;
    this->Shoes = Shoes;
    this->ClothesStatus = ClothesStatus;
}

String^ Clothes::GetBody()
{
    throw gcnew System::NotImplementedException();
    return this->Body;
}

String^ Clothes::GetPants()
{
    throw gcnew System::NotImplementedException();
    return this->Pants;
}

String^ Clothes::GetShoes()
{
    throw gcnew System::NotImplementedException();
    return this->Shoes;
}

Int32 Clothes::GetClothesStatus()
{
    return this->ClothesStatus;
}

void Clothes::SewUpClothes()
{
    throw gcnew System::NotImplementedException();
    if (this->ClothesStatus < 100) {
        this->ClothesStatus += 15;
        if (this->ClothesStatus > 100) {
            this->ClothesStatus = 100;
        }
    }
}
