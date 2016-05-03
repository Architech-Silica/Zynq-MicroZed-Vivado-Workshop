#include <stdio.h>
#include "platform.h"
#include "xgpiops.h"
#include "xparameters.h"


int main()
{
	XGpioPs_Config *GPIO_Config;
	XGpioPs my_Gpio;
	int Status;

	init_platform();

	printf("Exercise 05\n\r");
	<ADD CODE HERE TO LOOKUP THE CONFIG OF THE GPIO PERIPHERAL>
        <ADD CODE HERE TO INITIALISE THE GPIO PERIPHERAL>

	<ADD CODE HERE TO SET THE DIRECTION OF THE GPIO PINS>
        <ADD CODE HERE TO ENABLE ANY GPIO OUTPUT BUFFERS>
	
        while(1)
	{
		<ADD CODE HERE TO READ THE VALUE OF THE BUTTON INTO A VARIABLE>
                <ADD CODE HERE TO WRITE THE VALUE OF THE BUTTON INTO A VARIABLE>
	}

	return 0;
}


