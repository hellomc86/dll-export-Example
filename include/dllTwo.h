

#include "settings.h"

class DLLEXPORT UpgradeComputer
{
	int addNumberOfCpu;

public:
	//UpgradeComputer();
	UpgradeComputer(int nCPU = 1);

	int getaddNumberOfCpu();

	void setaddNumberOfCpu(int nCPU);

	void addCpu(Computer& comp);
};