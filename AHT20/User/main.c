#include "delay.h"
#include "usart.h"
#include "bsp_i2c.h"


int main(void)
{	
	delay_init();     //��ʼ��  
	uart_init(115200);	 //������
	IIC_Init();
		while(1)
	{
		printf("�¶�ʪ����ʾ");
		read_AHT20_once();
		delay_ms(2000);
  }
}
