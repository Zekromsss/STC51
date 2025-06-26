#include <REGX52.H>
#include <INTRINS.H>

void Nixie(unsigned int Location)
{
	switch(Location)
	{
		case 1:
			P2_4=0;
			P2_3=0;
			P2_2=0;
			while(1){P0=0x06;}//0000 0110}
		case 2:
			P2_4=0;
			P2_3=0;
			P2_2=1;
			while(1){P0=0x5B;}//0101 1011}
		case 3:
			P2_4=0;
			P2_3=1;
			P2_2=0;
			while(1){P0=0x4F;}//0100 1111}
		case 4:
			P2_4=0;
			P2_3=1;
			P2_2=1;
			while(1){P0=0x66;}//0110 0110}
		case 5:
			P2_4=1;
			P2_3=0;
			P2_2=0;
			while(1){P0=0x6D;}//0110 1101}
		case 6:
			P2_4=1;
			P2_3=0;
			P2_2=1;
			while(1){P0=0x7D;}//0111 1101}
		case 7:
			P2_4=1;
			P2_3=1;
			P2_2=0;
			while(1){P0=0x07;}//0000 0111}
		case 8:
			P2_4=1;
			P2_3=1;
			P2_2=1;
			while(1){P0=0x7F;}//0111 1111}
	}
}
{
	switch(Location)
	{
		case 1:
			P2_4=0;
			P2_3=0;
			P2_2=0;
		}
}
void main (){
	
}