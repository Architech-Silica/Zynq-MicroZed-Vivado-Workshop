#include <stdio.h>
#include "platform.h"
#include "xgpiops.h"
#include "xparameters.h"


int main()
{
	XGpioPs_Config *GPIO_Config;
	XGpioPs my_Gpio;
	int Status;
	int count;
	int delay;

	init_platform();

	printf("Hello World\n\r");
	GPIO_Config = XGpioPs_LookupConfig(XPAR_PS7_GPIO_0_DEVICE_ID);

	Status = XGpioPs_CfgInitialize(&my_Gpio, GPIO_Config, GPIO_Config->BaseAddr);

	XGpioPs_SetDirectionPin(&my_Gpio, 47, 1);
	XGpioPs_SetOutputEnablePin(&my_Gpio, 47, 1);


	for(count = 0; count < 50; count++)
	{
		XGpioPs_WritePin(&my_Gpio, 47, 1);
		for (delay=0; delay< 2000; delay++)
		{
			printf(".");
		}

		XGpioPs_WritePin(&my_Gpio, 47, 0);
		for (delay=0; delay< 2000; delay++)
		{
			printf(".");
		}
	}



	return 0;
}


