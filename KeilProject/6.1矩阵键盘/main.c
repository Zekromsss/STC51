#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned int Num;

void main (){
	LCD_Init();
	LCD_ShowString(1,1,"U are life");
	while(1){
		Num=MatrixKey();
		if(Num){
			LCD_ShowNum(2,1,Num,2);
		}
/**
  *  @brief   这里必须要if（Num）,因为MatrixKey按钮未置下时是常态的0
	*	          "Num=MatrixKey();
	*	           LCD_ShowString(2,1,Num,2);"
	*	          不可取
  */
	
}}