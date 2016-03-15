/*
 * includes.h
 *
 *  Created on: Mar 12, 2016
 *      Author: p
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

#include "init.h"
#include "MPC5604B.h"
#include "IntcInterrupts.h"
#include "pit.h"
#include "capture.h"
#include "delay.h"
#include "speed.h"
#include "steer.h"
#include "analysis.h"
#include "debug.h"
#include "sci.h"

#define ABS(x)              ((x) > 0 ? (x) : 0-(x))

/***************keys*****************/
#define S6 SIU.PCR[13].R
#define S5 SIU.PCR[14].R
#define S4 SIU.PCR[39].R	//E0
#define S3 SIU.PCR[15].R

/***************steer*****************/
#define TargetSteer EMIOS_0.CH[4].CBDR.R // ¶æ»úÖµ
#define CENTER 3692//3720

#endif /* INCLUDES_H_ */
