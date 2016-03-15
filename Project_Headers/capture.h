/*
 * capture.h
 *
 *  Created on: Mar 14, 2016
 *      Author: ��ԣ
 */

#ifndef CAPTURE_H_
#define CAPTURE_H_

#define CCDL_SI  SIU.PCR[10].R   //���������Դ������Ķ˿� SI  A10
#define CCDL_CLK SIU.PCR[11].R   //���������Դ������Ķ˿� CLK A11

#define CCDR_SI  SIU.PCR[66].R   //���������Դ������Ķ˿� SI  E2
#define CCDR_CLK SIU.PCR[6].R    //���������Դ������Ķ˿� CLK A6

extern void ImageCapture(int L[],int R[]);
extern void ImageCopy(int L[],int PL[]);
extern void SpeedCount(void);
extern int PixelLeft[128];
extern int PixelRight[128];
extern unsigned int speedcounter1,speedcounter2,speedcounter3,speedcounter4;

#endif /* CAPTURE_H_ */
