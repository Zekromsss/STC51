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
	while(1){
		if(P3_1==0){//立直
			Delay(20);
			while(P3_1==0);//按下
			Delay(20);
			P2_0=~P2_0;
		}
	}
}
