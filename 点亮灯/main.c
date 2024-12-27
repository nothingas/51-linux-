#include <at89x52.h>
void Delay(unsigned int ms);
void main(){
        while(1){
        		//自行对照开发板引脚图。
                P2 = 0xFF;   
                Delay(500);
                P2 = 0xFE;
                //led灯以一秒为一个周期闪烁。
                Delay(500); 
        }
}

void Delay(unsigned int ms){
        unsigned int a, b;
        for(a = ms; a > 0; a--){
                for(b = 100; b > 0; b--);
        }
}


