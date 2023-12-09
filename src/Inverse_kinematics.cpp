#include <Romi32U4.h>
#include  "Speed_controller.h"
#include  "Position_estimation.h"
#include "Inverse_kinematics.h"
#include "math.h"

SpeedController drive;
Position forwardKinematics;

<<<<<<< HEAD
void InverseKinematics::Init(void)
{

}

void InverseKinematics::DriveToTarget(float x, float y, float theta)
{
=======
void InverseKinematics::Init(void){

}

void InverseKinematics::DriveToTarget(float x, float y, float theta) {
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
    UpdatePose();
    float targetTheta = atan2(y - currenty, x - currentx);
    if (targetTheta > currentTheta) {
        while (targetTheta > currentTheta) {
<<<<<<< HEAD
            drive.Run(-50, 50);
=======
            drive.Run(-50, 50)
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
            UpdatePose();
        }
    } else {
        while (targetTheta < currentTheta) {
<<<<<<< HEAD
            drive.Run(50, -50);
=======
            drive.Run(50, -50)
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
            UpdatePose();
        }
    }
    drive.Stop();
    if (x > currentx) {
        while (x > currentx) {
<<<<<<< HEAD
            drive.Run(50, 50);
=======
            drive.Run(50, 50)
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
            UpdatePose();
        }
    } else {
        while (x < currentx) {
<<<<<<< HEAD
            drive.Run(50, 50);
=======
            drive.Run(50, 50)
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
            UpdatePose();
        }
    }
    drive.Stop();
    if (theta > currentTheta) {
        while (theta > currentTheta) {
<<<<<<< HEAD
            drive.Run(-50, 50);
=======
            drive.Run(-50, 50)
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
            UpdatePose();
        }
    } else {
        while (theta < currentTheta) {
<<<<<<< HEAD
            drive.Run(50, -50);
=======
            drive.Run(50, -50)
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
            UpdatePose();
        }
    }
}

<<<<<<< HEAD
void InverseKinematics::UpdatePose(void)
{
=======
void InverseKinematics::UpdatePose(void){
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
    currentx = forwardKinematics.GetX();
    currenty = forwardKinematics.GetY();
    currentTheta = forwardKinematics.GetTheta();
}

<<<<<<< HEAD
void InverseKinematics::Stop(void)
{
=======
void InverseKinematics::Stop(void){
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
    drive.Stop();
}