#pragma once
using System::String;
using System::Int32;

ref class Work
{
private:
	String^ Namework;
	Int32 Payment;

public:
	Work();
	Work(String^ namework, Int32 payment);
	Int32 GetPayment();
	void SetPayment(Int32 payment);
	String^ GetNamework();
	void SetNamework(String^ namework);
};
