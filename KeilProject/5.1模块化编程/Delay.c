
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