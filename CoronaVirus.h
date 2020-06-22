#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class CoronaVirus
{
	string m_dna;
	int m_resistance;

public:
	void constuctor();
	void destructor();
	void copyConstructor();
	string loadADNInformation() 
	{
		ifstream fileInput("ATGX.bin");
	}
	void reduceResistance(int i_medicineResistance) 
	{
		m_resistance = m_resistance - i_medicineResistance;
	}
	virtual void doBorn();
	virtual void doClone();
	virtual void doDie();
	virtual void initResistance();

};

