/*
 * 7Segment_driver.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Meriam
 */



#ifndef Driver_7segment_H_
#define Driver_7segment__H_

#include "DIO.h"


#define EN 2

void Segment_initial(void);

void Segment_increment_Counter(Uint8 Count);

void Segment_decrement_Counter (Uint8 count);

#endif /* Driver_7segment__H_ */
