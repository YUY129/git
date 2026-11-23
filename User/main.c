#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	
	GPIO_InitTypeDef GPIO_Initstructure;
	GPIO_Initstructure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Initstructure.GPIO_Mode = GPIO_Mode_Out_PP; //推挽输出
	GPIO_Initstructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_2;
	GPIO_Init(GPIOA, &GPIO_Initstructure);
	GPIO_Init(GPIOD, &GPIO_Initstructure);
	
	GPIO_Initstructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Initstructure.GPIO_Pin = GPIO_Pin_15;
	GPIO_Init(GPIOA, &GPIO_Initstructure);
	
//	GPIO_ResetBits(GPIOA,GPIO_Pin_0);   //低-亮
//	GPIO_SetBits(GPIOA,GPIO_Pin_0);    //高-灭
//	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
//	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
	while(1)
	{
//		GPIO_ResetBits(GPIOA,GPIO_Pin_0);
//		Delay_ms(500);
//		GPIO_SetBits(GPIOA,GPIO_Pin_0);
//		Delay_ms(500);
		
//		GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
//		Delay_ms(500);
//		GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
//		Delay_ms(500);
		if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_15) == RESET)
		{
			
		}
		
			GPIO_WriteBit(GPIOA,GPIO_Pin_8,(BitAction)0);
			GPIO_WriteBit(GPIOD,GPIO_Pin_2,(BitAction)0);
			Delay_ms(200);
			GPIO_WriteBit(GPIOA,GPIO_Pin_8,(BitAction)1);
			GPIO_WriteBit(GPIOD,GPIO_Pin_2,(BitAction)1);
			Delay_ms(200);
		
	}
}
	
