#include <Romi32U4.h>
#include  "Speed_controller.h"
#include  "Position_estimation.h"
#include "Inverse_kinematics.h"

SpeedController drive;
Position forwardKinematics;

void Init(void){

}

bool DriveToTarget(float x, float y, float theta){

}

void Stop(void){
    drive.Stop();
}