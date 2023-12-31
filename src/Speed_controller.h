#ifndef SPEED_CONTROLLER
#define SPEED_CONTROLLER

#include <Romi32U4.h>

class SpeedController{
    private:
        const float Kp = 0.5; 
        const float Ki = 0.1; 
        float E_left = 0; 
        float E_right = 0;

    public:
        void Init(void);
        void Run(float, float); //speed left, speed right
        void Stop(void);
};

#endif