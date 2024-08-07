typedef volatile unsigned int vuint32_t ;

#include <stdint.h>

#define RCC_BASE    0x40021000
#define PortA_BASE  0x40010800

#define RCC_APB2ENR *(vuint32_t*)(RCC_BASE + 0x18)
#define GPIOA_CRH   *(vuint32_t*)(PortA_BASE + 0x04)
#define GPIOA_ODR   *(vuint32_t*)(PortA_BASE + 0x0c)

typedef union {
	vuint32_t all_fields;
	struct{
		vuint32_t reserved:13;
		vuint32_t P_13:1;
	}Pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(PortA_BASE + 0x0c);

int main(void)
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH    &= 0xFF0FFFFF;
	GPIOA_CRH    |= 0x00200000;
	while(1){
		R_ODR->Pin.P_13 = 1;
		for(int i = 0; i<5000; i++);
		R_ODR->Pin.P_13 = 0;
		for(int i = 0; i<5000; i++);
	}
}
