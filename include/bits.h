#ifndef BITS_H_
#define BITS_H_

#define SET(bit)		(1 << bit)
#define	SET_BIT(y,bit)	(y|=(1<<bit))
#define	CLR_BIT(y,bit)	(y&=~(1<<bit))
#define CPL_BIT(y,bit) 	(y^=(1<<bit))
#define TST_BIT(y,bit) 	(y&(1<<bit))

#endif /* BITS_H_ */