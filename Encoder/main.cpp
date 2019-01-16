#include "mbed.h"
#include "RotaryEncoder.h"

//USBで通信を行う
Serial pc(USBTX, USBRX);
//エンコーダ1
RotaryEncoder R1(PA_9, PA_8);

int main()
{
    while(1) {
        pc.printf("%d\n\r", R1.Get_Count());
        //直径10mm、分解能は2048
        pc.printf("%.2lf\n\r", R1.Get_Circumference(10, 2048));
    }
}
