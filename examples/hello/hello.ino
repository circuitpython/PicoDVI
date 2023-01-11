#include <PicoDVI.h>

PicoDVI dvi(320, 240, VREG_VOLTAGE_1_20, dvi_timing_640x480p_60hz, pimoroni_demo_hdmi_cfg);

void setup() {
  Serial.begin(115200);
  while(!Serial);
  Serial.println("A");
  dvi.begin();
  Serial.println("B");
}

void loop() {
  Serial.println("C");
}
