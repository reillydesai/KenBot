#include <Romi32U4.h>
#include "Encoders.h"
#include  "Speed_controller.h"
#include "Montage_tasks.h"

SpeedController controller;

<<<<<<< HEAD
void Montage::Init(void)
{

}

bool Montage::HulaHoop()
{
=======
void Montage::Init(void){

}

bool Montage::HulaHoop(){
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8
    // if less than 3 turns return false
    // if more than 3 turns controller.stop stop & return true
}

<<<<<<< HEAD
bool Montage::Buzzer()
{
    if (i < 0 /*num rows in song*/) {
        if (millis() - time_prev < song[i][1])
        {
            /*play note at song[i][0]*/ 
        } else {
            BuzzerStop();
            i++;
            time_prev = millis();
        }
        return false;
    } else {
        return true;
    }
}

void Montage::BuzzerStop()
{
=======
void Montage::HulaHoopStop(){
    controller.Stop();
}

bool Montage::Buzzer(){

}

void Montage::BuzzerStop(){
>>>>>>> 503bd95d6054a85bfb0adeaaae59dc1d465e96b8

}