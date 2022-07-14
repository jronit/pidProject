// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

void Robot::RobotInit() {} // happens once
void Robot::RobotPeriodic() {} // happens repeatedly

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {

  pidController.SetP(1);
  pidController.SetD(0);
  pidController.SetI(0);

  encoder.SetPosition(0);

}
void Robot::TeleopPeriodic() {

  neo->Set(.2);
  frc::SmartDashboard::PutNumber("Num Rotations", encoder.GetPosition());
//test a change
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
