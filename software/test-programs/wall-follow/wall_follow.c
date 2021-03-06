#include <stdlib.h>
#include "esp_timer.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/inc/motorController.h"
#include "hal/inc/movement.h"
#include "hal/inc/nav.h"

void app_main() {
  if (init()) exit(1);

  zero();
  /*moveTest(8.5);
  turnCenter(15.0);
  moveTest(8.5);
  turnCenter(15.0);
  moveTest(8.5);
  turn180Center(15.0);
  moveTest(8.5);
  turnCenter(-15.0);
  moveTest(8.5);
  turnCenter(-15.0);
  moveTest(8.5);*/

  moveCenter(8.5);
  turnCenter(15.0);
  turnCenter(15.0);
  moveCenter(8.5);
  turn180Center(-15.0);
  moveCenter(8.5);
  turnCenter(-15.0);
  turnCenter(-15.0);
  moveCenter(8.5);

  // moveIRU(8.5);
  /*while (true) {
    struct movement_info info = moveIR(8.5);
    if (!info.left || !info.right) break;
    if (info.front)
      turn180(-15.0);
  }*/
  // moveEnc(8.5, 1000);
}
