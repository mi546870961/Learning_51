#include <reg52.h>

void delayms(unsigned int ms);

void main(void)
{
	unsigned char a= 0xfe;
	while(1){
		P1=a;
		delayms(200);//��ʱ����
		a=a<<1;//����,����ѭ������
	}
}

void delayms(unsigned int ms)//��ʱ����
{
	unsigned int i,j;
	for(i=0;i<ms;i++)
		for(j=0;j<110;j++);
}