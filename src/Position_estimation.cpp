#include  "Position_estimation.h"
#include "Encoders.h"
#include <math.h>

Encoder RomiEncoders;
float x = 0;
float y = 0;
float theta = 0;
unsigned long time_prev = millis();
unsigned long time_now = 0;

void Position::Init(void)
{
    time_prev = millis();
    RomiEncoders.ReadEncoderCountLeft(true);
    x = 0;
    y = 0;
    theta = 0;
}

void Position::Stop(void)
{
    time_prev = millis();
    x = 0; 
    y = 0;
    theta = 0;
}

Position::pose_data Position::ReadPose(void)
{
    return {x,y,theta};
}

String Position::PoseToString()
{
    return (String)(x) + "\t" + (String)(y) + "\t" + (String)(theta);
}

void Position::UpdatePose(float target_speed_left, float target_speed_right)
{
    time_now = millis();
    if (time_now - time_prev >= 50) //update every 50ms for practical reasons
    {
        if (target_speed_left == target_speed_right) {
            x += target_speed_left * cos(theta) * (time_now - time_prev);
            y += target_speed_left * sin(theta) * (time_now - time_prev);
        } else {
            // Step 1: Robot Motion
            float R = (l/2)*((target_speed_right+target_speed_left)/(target_speed_right-target_speed_left));
            float omega = (target_speed_right-target_speed_left)/l;
            float v = R*omega;

            // Step 2: Icc
            float Icc_x = x - R * sin(theta);
            float Icc_y = y + R * cos(theta);

            // Step 3:
            x = Icc_x + R * sin(theta + omega * (time_now - time_prev));
            x = Icc_x - R * cos(theta + omega * (time_now - time_prev));
            theta += omega * time_now - time_prev;
        }
        time_prev = time_now;
    }
}

float Position::GetX(){
    return x;
}
    
float Position::GetY(){
    return y;
}
    
float Position::GetTheta(){
    return theta;
}