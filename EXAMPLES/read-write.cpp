#include <iostream>
#include "cArduino.h"
#include <string>

cArduino arduino(ArduinoBaundRate::B9600bps);

using namespace std;
int main()
{
	if(!arduino.isOpen())
	{
		cerr<<"can't open arduino"<<endl;
		return 1;
	}

	cout<<"arduino open at "<<arduino.getDeviceName()<<endl;


	while(true)
        {
		//user
		string userInput;

		cout<<">>";
		cin>>userInput;

		arduino.write(userInput);
		//--


		//responce
		string arduinoOutput;

		if(!arduino.read(arduinoOutput))//read witch timeout!
		{
			//timeout
			cerr<<"TIMEOUT!"<<endl;
		}else{
			//responce
			cout<<arduinoOutput<<endl;
		}
	}

	return 0;
}
