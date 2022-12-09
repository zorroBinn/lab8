#include "Clothes.h"

Clothes::Clothes()
{
    throw gcnew System::NotImplementedException();
    this->Body = "Майка";
    this->Pants = "Трусы";
    this->Shoes = "Тапки";
    this->ClothesStatus = 100;
}

Clothes::Clothes(String^ Body, String^ Pants, String^ Shoes)
{
    throw gcnew System::NotImplementedException();
    this->Body = Body;
    this->Pants = Pants;
    this->Shoes = Shoes;
    this->ClothesStatus = 100;
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

void Clothes::TearClothes()
{
    throw gcnew System::NotImplementedException();
    if (this->ClothesStatus > 0) {
        this->ClothesStatus -= 15;
        if (this->ClothesStatus < 0) {
            this->ClothesStatus = 0;
        }
    }
}

void Clothes::BuySuit()
{
    throw gcnew System::NotImplementedException();
    this->Body = "Пиджак";
    this->Pants = "Брюки";
    this->Shoes = "Туфли";
    this->ClothesStatus = 100;
}
