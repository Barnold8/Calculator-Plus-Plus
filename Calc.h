#pragma once
#include <iostream>

namespace Calc {

	void visual(double data);

	enum Ops {

		plus,
		minus,
		times,
		divide,
		modulo,

		MAX


	};


	double mth(double x, double y,Ops op);
	
	


};
