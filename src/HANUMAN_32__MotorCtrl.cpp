
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File		:	HANUMAN_32__MotorCtrl.cpp
 *	Release		:	v0.1.1
 *
 *	Created on	:	Tue 27 Jan 2026
 *		Author	:	hii-nice-2-meet-u
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "HANUMAN_32__MotorCtrl.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

MotorCtrl::MotorCtrl(void) {
	pinMode(__DEFINE__M1_DIR, OUTPUT);
	pinMode(__DEFINE__M2_DIR, OUTPUT);
	pinMode(__DEFINE__M3_DIR, OUTPUT);
	pinMode(__DEFINE__M4_DIR, OUTPUT);

	digitalWrite(__DEFINE__M1_DIR, LOW);
	digitalWrite(__DEFINE__M2_DIR, LOW);
	digitalWrite(__DEFINE__M3_DIR, LOW);
	digitalWrite(__DEFINE__M4_DIR, LOW);

	pinMode(__DEFINE__M1_PWM, OUTPUT);
	pinMode(__DEFINE__M2_PWM, OUTPUT);
	pinMode(__DEFINE__M3_PWM, OUTPUT);
	pinMode(__DEFINE__M4_PWM, OUTPUT);

	analogWrite(__DEFINE__M1_PWM, 0);
	analogWrite(__DEFINE__M2_PWM, 0);
	analogWrite(__DEFINE__M3_PWM, 0);
	analogWrite(__DEFINE__M4_PWM, 0);
}

//"" --------------------------------

void MotorCtrl::M1(int speed) {
    digitalWrite(__DEFINE__M1_DIR, speed < 0);
	analogWrite(__DEFINE__M1_PWM, min(255, abs(speed)));
}

void MotorCtrl::M2(int speed) {
	digitalWrite(__DEFINE__M2_DIR, speed < 0);
	analogWrite(__DEFINE__M2_PWM, min(255, abs(speed)));
}

void MotorCtrl::M3(int speed) {
    digitalWrite(__DEFINE__M3_DIR, speed < 0);
	analogWrite(__DEFINE__M3_PWM, min(255, abs(speed)));
}

void MotorCtrl::M4(int speed) {
    digitalWrite(__DEFINE__M4_DIR, speed < 0);
	analogWrite(__DEFINE__M4_PWM, min(255, abs(speed)));
}

void MotorCtrl::Stop(void) {
	analogWrite(__DEFINE__M1_PWM, 0);
	analogWrite(__DEFINE__M2_PWM, 0);
	analogWrite(__DEFINE__M3_PWM, 0);
	analogWrite(__DEFINE__M4_PWM, 0);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
