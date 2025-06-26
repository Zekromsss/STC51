#include <REGX52.H>
#include <INTRINS.H>

void main (){
//	P2=0xFE;Ïàµ±ÓÚ 1111 1110¼´
	
//	P2_0=1;
//	P2_1=1;
//	P2_2=1;
//	P2_3=1;
//	P2_4=1;
//	P2_5=1;
//	P2_6=1;
//	P2_7=0;
	while(1){
		if(P3_1==1)
		{
			P2_0=1;
		}
		else
		{
			P2_0=0;
		}
	}
}