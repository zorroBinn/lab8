#pragma once
using namespace System;

ref class Work
{
private:
	String^ Namework;
	Int32 Payment;

public:
	Work(String^ namework, Int32 Payment);
	Int32 GetPayment();
	String^ GetNamework();
};
