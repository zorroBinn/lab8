#pragma once
using namespace System;

ref class Realty
{
private:
	String^ Housing;
	String^ Vehicle;

public:
	Realty();
	String^ GetHousing();
	void SetHousing(String^ housing);
	String^ GetVehicle();
	void SetVehicle(String^ vehicle);
};

