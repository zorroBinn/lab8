#pragma 
using System::String;
using System::Int32;

ref class Clothes
{
private:
	String^ Body;
	String^ Pants;
	String^ Shoes;
	Int32 ClothesStatus;

public:
	Clothes();
	Clothes(String^ Body, String^ Pants, String^ Shoes);
	String^ GetBody();
	String^ GetPants();
	String^ GetShoes();
	Int32 GetClothesStatus();
	void SewUpClothes();
	void TearClothes();
	void BuySuit();
};

