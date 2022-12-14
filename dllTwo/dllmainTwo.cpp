// dllmain.cpp : Defines the entry point for the DLL application.

#include "dllmain.h"

#include "dllTwo.h"

//extern int DLLEXPORT memoryAdd;

//UpgradeComputer::UpgradeComputer() : addNumberOfCpu(0) { }
UpgradeComputer::UpgradeComputer(int nCPU) : addNumberOfCpu(nCPU) { }

int UpgradeComputer::getaddNumberOfCpu() { return addNumberOfCpu; }

void UpgradeComputer::setaddNumberOfCpu(int nCPU) { addNumberOfCpu = nCPU; }

void UpgradeComputer::addCpu(Computer& comp) { comp.setNumberOfCpu(comp.getNumberOfCpu() + getaddNumberOfCpu() + Computer::getMemoryAdd()); }

