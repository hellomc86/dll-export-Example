// dllmain.cpp : Defines the entry point for the DLL application.

#include "dllmain.h"

int memoryAdd = 0;

Computer::Computer() :numberOfCpu(0) {};

Computer::Computer(int nCPU) :numberOfCpu(nCPU) {}

int Computer::getNumberOfCpu() { return numberOfCpu; }

void Computer::setNumberOfCpu(int nCPU) { numberOfCpu = nCPU; }

int Computer::getMemoryAdd() { return memoryAdd; }

void Computer::setMemoryAdd(int nMem) { memoryAdd = nMem; }