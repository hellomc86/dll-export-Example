// dllmain.cpp : Defines the entry point for the DLL application.

#include <iostream>
#include "main.h"
#include "dllTwo.h"


Laptop::Laptop() :memoryCapacity(0) { Computer(); }

Laptop::Laptop(int nCPU) :memoryCapacity(nCPU) { Computer(); }

Laptop::Laptop(int nCPU, int nCap) :memoryCapacity(nCPU), Computer(nCap) { }

int Laptop::getmemoryCapacity() { return memoryCapacity; }

void Laptop::setmemoryCapacity(int nCPU) { memoryCapacity = nCPU; }

int main()
{
	Laptop lp = Laptop(3, 5);
	UpgradeComputer upgr = UpgradeComputer(2);
	std::cout << "getmemoryCapacity	/t " << lp.getmemoryCapacity() << std::endl;
	std::cout << "getNumberOfCpu /t " << lp.getNumberOfCpu() << std::endl;
	Computer::setMemoryAdd(3);
	upgr.addCpu(lp);
	std::cout << "getmemoryCapacity	/t " << lp.getmemoryCapacity() << std::endl;
	std::cout << "getNumberOfCpu /t " << lp.getNumberOfCpu() << std::endl;
	return 0;
}