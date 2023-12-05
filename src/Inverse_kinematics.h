#ifndef INVERSE_KINEMATICS
#define INVERSE_KINEMATICS

#include <Romi32U4.h>

class InverseKinematics{
    private:
        
    public:
        void Init(void);
        bool DrivetoTarget(float, float, float); //x, y, theta as parsed from Barbie
        void Stop(void);
};

#endif