


#include "settings.h"

extern int DLLEXPORT memoryAdd;

class DLLEXPORT Computer
{
	int numberOfCpu;

public:
	Computer();
	Computer(int nCPU); 

	int getNumberOfCpu();

	void setNumberOfCpu(int nCPU);

	static int getMemoryAdd();

	static void setMemoryAdd(int nMem);
};