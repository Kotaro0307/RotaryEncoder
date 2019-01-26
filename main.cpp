#include "mbed.h"
#include "RotaryEncoder.h"

//USBで通信を行う
Serial pc(USBTX, USBRX);

//エンコーダ
RotaryEncoder R1(p21, p22);
RotaryEncoder R2(p23, p24);
RotaryEncoder R3(p25, p26);

int main(void)
{
    while(1) {
        pc.printf("%.2lf\n\r", R1.Get_Circumference(10, 2048));
//        pc.printf(", %d", R2.Get_Count());
//        pc.printf(", %d\n\r", R3.Get_Count());
        
    }
}