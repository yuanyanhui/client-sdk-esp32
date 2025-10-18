#include "esp_log.h"
#include "bsp/esp-bsp.h"

#include "board.h"

static const char *TAG = "board";

void board_init()
{
    ESP_LOGI(TAG, "Initializing board");
    bsp_audio_init(NULL);
}
