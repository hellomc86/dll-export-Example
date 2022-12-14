
//#include "settings.h"
#include "dllmain.h"

class Laptop :public Computer
{
	int memoryCapacity;

public:
	Laptop();
	Laptop(int mCp = 0);
	Laptop(int nCPU = 0, int nCap = 0);

	int getmemoryCapacity();

	void setmemoryCapacity(int mCp);
};