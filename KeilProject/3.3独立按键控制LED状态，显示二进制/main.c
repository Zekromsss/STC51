#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)	//@12.000MHz
{
	while(xms--){
		unsigned char data i, j;
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
 void main(){
	unsigned char num = 0;
	while(1){
		if (P3_1==0){
			Delay(20);
			while(P3_1==0);
			Delay(20);
			num++;
			P2=~(num);
		}
	}
 }
 /*
 小灯泡低电平有效，1.3-8译码器低电平有效
 2.低电平只起到一个信号传递的作用，信号会在某一元件中继变强
 */