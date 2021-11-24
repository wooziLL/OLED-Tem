#include "delay.h"
#include "usart.h"
#include "bsp_i2c.h"


int main(void)
{	
	delay_init();     //初始化  
	uart_init(115200);	 //波特率
	IIC_Init();
		while(1)
	{
		printf("温度湿度显示");
		read_AHT20_once();
		delay_ms(2000);
  }
}
