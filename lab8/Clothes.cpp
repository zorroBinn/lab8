#include "Clothes.h"

Clothes::Clothes()
{
    
    this->Body = L"�����";
    this->Pants = L"�����";
    this->Shoes = L"�����";
    this->ClothesStatus = 100;
}

Clothes::Clothes(String^ Body, String^ Pants, String^ Shoes)
{
    
    this->Body = Body;
    this->Pants = Pants;
    this->Shoes = Shoes;
    this->ClothesStatus = 100;
}

String^ Clothes::GetBody()
{
    
    return this->Body;
}

String^ Clothes::GetPants()
{
    
    return this->Pants;
}

String^ Clothes::GetShoes()
{
    
    return this->Shoes;
}

Int32 Clothes::GetClothesStatus()
{
    return this->ClothesStatus;
}

void Clothes::SewUpClothes()
{
    
    if (this->ClothesStatus < 100) {
        this->ClothesStatus += 15;
        if (this->ClothesStatus > 100) {
            this->ClothesStatus = 100;
        }
    }
}

void Clothes::TearClothes()
{
    
    if (this->ClothesStatus > 0) {
        this->ClothesStatus -= 15;
        if (this->ClothesStatus < 0) {
            this->ClothesStatus = 0;
        }
    }
}

void Clothes::BuySuit()
{
    
    this->Body = "������";
    this->Pants = "�����";
    this->Shoes = "�����";
    this->ClothesStatus = 100;
}
