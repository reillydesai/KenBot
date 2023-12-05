#ifndef MONTAGE_TASKS
#define MONTAGE_TASKS

#include <Romi32U4.h>

class Montage{
    private:
        // buzzer pin
        // PWM consts for notes
        // array for notes

        void HulaHoopStop(void);
        void BuzzerStop(void);

    public:
        void Init(void);
        bool HulaHoop();
        bool Buzzer(void);
};

#endif