#include <Arduino.h>
#include "SoftwareSerial_fix.h"
#include "MeUsb.h"

MeUsb usb(10,9);

void setup() 
{
   Serial.begin(115200); 
   usb.init(USB1_0);
}

void loop()
{
  if(!usb.device_online)
  {
    usb.probeDevice(); 
    delay(100);
  }
  else
  {
    int len = usb.host_recv();
    if (len == 4){
      Serial.print(usb.RECV_BUFFER[0],DEC);
      Serial.print(',');
      Serial.print(usb.RECV_BUFFER[1],DEC);
      Serial.print(',');
      Serial.print(usb.RECV_BUFFER[2],DEC);
      Serial.print(',');
      Serial.print(usb.RECV_BUFFER[3],DEC);
      Serial.print('\n');
    }
  }
}
