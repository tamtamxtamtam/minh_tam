#pragma once
#include "CoronaVirus.h"
class AlphaCoronaVirus : public CoronaVirus
{
	int m_color;
public: 
	void doBorn() 
	{
		loadADNInformation();
		m_color = rand() % 2 + 1;
	}
	void doClone()
	{

	}


};

