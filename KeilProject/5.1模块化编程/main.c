#include <REGX52.H>
#include "Delay.h"
#include "Nixie.h"

void main (){
	while(1){//主函数结束后会重复执行，用while限制住
		Nixie(1,1);
		Nixie(2,2);
		Nixie(3,3);
	}

}