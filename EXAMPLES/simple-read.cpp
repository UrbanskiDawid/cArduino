#include <iostream>
#include "cArduino.h"

cArduino arduino(ArduinoBaundRate::B9600bps);

int main()
{

	if(!arduino.isOpen())
	{
		std::cerr<<"can't open arduino"<<endl;
		return 1;
	}

	std::cout<<"arduino open at "<<arduino.getDeviceName()<<endl;

	while(true)
	{
		std::cout<<"'"<<arduino.read()<<"'"<<endl;
	}

	return 0;
}
