#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEKս��STM32������
//������������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/3
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////   	 



//#define KEY1 PBin(0)	//PB0
//#define KEY2 PAin(3)   	//PA3


#define KEY1  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)//��ȡ����1
#define KEY2  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_3)//��ȡ����2

#define KEY1_PRES 	1	//KEY1����
#define KEY2_PRES		2	//KEY2����

extern u8 key_state; 

u8 get_key(void);
void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan(u8);  	//����ɨ�躯��					    
#endif