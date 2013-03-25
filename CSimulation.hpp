#ifndef CSIMULATION_HPP
#define CSIMULATION_HPP

#include "GLWidget.h"

class CSimulation{
	
private:
	GLWidget* simGL;

public:
	
	CSimulation(GLWidget* simGL);
	
	~CSimulation(){};
	
	int loop();
	
		
};

#endif
