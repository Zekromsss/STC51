#include <REGX52.H>
#include <INTRINS.H>



void Delay(unsigned int x_ms)//@12.000MHz
{
	unsigned char data i, j;
	while(x_ms--){
		i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
}
}
void Nixie(unsigned int Location,unsigned int Num)
{
	int NUM[9]={0,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F};
	switch(Location)
	{
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
	}
	P0=NUM[Num];
	Delay(1);
}
void main()
{
	while(1){
		Nixie(1,1);
		Nixie(2,2);
		Nixie(3,3);
	}
}
/*
如果不加Delay（），则会有信号冲突
此时间加上，Delay是为了消影
单片机直接扫描，会耗费大量的单片机CPU时间
而有专用驱动芯片，自带显存，扫描电路，
*/