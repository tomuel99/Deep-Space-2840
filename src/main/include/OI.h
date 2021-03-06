/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef OI_H
#define OI_H
// #pragma once
#include <frc/Joystick.h>

class OI {
 public:
  frc::Joystick stick{0};
  bool intake();
  bool shooter();
  bool armTop();
  bool armMiddle();
  bool armBottom();
  bool armReset();
  bool panelUp();
  bool panelDown();
  double axis(int axisNumber);
  OI();
};

#endif OI_H