#include "mbed.h"
#include "RotaryEncoder.h"

//USBで通信を行う
Serial pc(USBTX, USBRX);

//エンコーダ
RotaryEncoder R1(p21, p22);
RotaryEncoder R2(p23, p24);

int main(void)
{
    while(1) {
        pc.printf("%d, %.2lf\n\r", R1.Get_Count(), R2.Get_Circumference(10, 2048));
    }
}
