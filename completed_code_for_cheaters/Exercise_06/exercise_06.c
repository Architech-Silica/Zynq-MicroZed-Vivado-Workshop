#include <stdio.h>
#include "platform.h"
#include "xil_io.h"
#include "xparameters.h"


int main(void)
{
	int word1;  // integers are 32 bits wide!
	int word2;  // integers are 32 bits wide!
	int word3;  // integers are 32 bits wide!

	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0, 0xAB);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 1, 0xFF);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 2, 0x34);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 3, 0x8C);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 4, 0xEF);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 5, 0xBE);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 6, 0xAD);
	Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 7, 0xDE);

	Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x10, 0x1209);
	Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x12, 0xFE31);
	Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x14, 0x6587);
	Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x16, 0xAAAA);


	Xil_Out32(0xE000A244, 0x0);

	while(1)
	{
		word1 = Xil_In32(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR);
		word2 = Xil_In32(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 4);

		word3 = Xil_In32(0xE000A064);

		printf("Word1 = 0x%08x\n\r", word1);
		printf("Word2 = 0x%08x\n\r", word2);
		printf("Word3 = 0x%08x\n\r", word3);
	}


	return(0);
}


