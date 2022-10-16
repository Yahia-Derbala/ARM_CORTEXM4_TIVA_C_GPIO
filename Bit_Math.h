#ifndef BIT_MATH_H
#define BIT_MATH_H

#define Set_Bit(VAR,BITNO) *(VAR) |=  (1 << (BITNO))
#define Clear_Bit(VAR,BITNO) *(VAR) &= ~(1 << (BITNO))
#define Toggle_Bit(VAR,BITNO) *(VAR) ^=  (1 << (BITNO))
#define Get_Bit(VAR,BITNO) ((*(VAR) >> (BITNO)) & 0x01)

#endif /* BIT_MATH_H */
