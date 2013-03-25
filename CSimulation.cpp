#include "CSimulation.hpp"
#include "GLWidget.h"

CSimulation::CSimulation(GLWidget* simGL_)
{
	simGL=simGL_;
	loop();
}

int CSimulation::loop()
{
	simGL->paintGLGreen();
	return 0;
}
