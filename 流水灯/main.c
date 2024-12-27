#include <at89x52.h>
void delay(int i);
void delay(int i){
  i = i*50000;
  while(i--);
  return;
}
int main(){
  P2 = 0xFE;
  int x = 0x01;
  while(1){
    if( (x&0xff )==0)x=0x01;
    delay(1);
    P2 = x^0xff;
    x = x<<1;
  }
  return 0;
}
