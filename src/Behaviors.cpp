#include <Romi32U4.h>
#include "Behaviors.h"
#include "Speed_controller.h"
#include "Position_estimation.h"
#include "Inverse_kinematics.h"
#include "Montage_tasks.h"

// sensors
Romi32U4ButtonA buttonA;

// motor-speed controller
SpeedController robot;

// function imports
Position positionTracking;
InverseKinematics inverse;
Montage tasks;

void Behaviors::Init(void)
{
    robot.Init();
}

void Behaviors::Stop(void)
{
    robot.Stop();
}

void Behaviors::Run(void)
{
    switch (drive_state)
    {
        case IDLE:
            // if next step recieved from barbie
                // change state to next step
                
        case DRIVE:
            inverse.DriveToTarget(/*barbie data*/ 0,0,0); // BLOCKING
            drive_state = IDLE;
            break;
        
        case HULA_HOOP:
            if (tasks.HulaHoop()) drive_state = IDLE;
            break;
    }

    switch (buzzer_state)
    {
        case OFF:
            break;

        case ON:
            if (tasks.Buzzer()) {
                buzzer_state = OFF;
            }
            break;
    }
}