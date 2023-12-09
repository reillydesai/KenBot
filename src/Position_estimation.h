#ifndef POSITION_ESTIMATION
#define POSITION_ESTIMATION

#include <Romi32U4.h>

class Position{
    private:
        float x, y, theta;
        unsigned long time_prev, time_now;
        const float l = 0.142875; //meters
        
    public:
        void Init(void);
        void UpdatePose(float,float);
        String PoseToString();
        void Stop(void);
        float GetX();
        float GetY();
        float GetTheta();
};

#endif