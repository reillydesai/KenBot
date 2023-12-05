#include <Romi32U4.h>
#include "Encoders.h"
#include  "Speed_controller.h"
#include "Montage_tasks.h"

Romi32U4Motors motors;
Encoder motorEncoder;
SpeedController controller;

void Init(void){

}

bool HulaHoop(){
    // if less than 3 turns return false
    // if more than 3 turns call stop & return true
}

void HulaHoopStop(){
    controller.Stop();
}

bool Buzzer(){

}

void BuzzerStop(){

}