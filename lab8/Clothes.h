#pragma 
using namespace System;

ref class Clothes
{
private:
	String^ Body;
	String^ Pants;
	String^ Shoes;
	Int32 ClothesStatus;

public:
	Clothes(String^ Body, String^ Pants, String^ Shoes, Int32 ClothesStatus);
	String^ GetBody();
	String^ GetPants();
	String^ GetShoes();
	Int32 GetClothesStatus();
	void SewUpClothes();
};

