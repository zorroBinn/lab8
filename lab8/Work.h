#pragma once
using namespace System;

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
