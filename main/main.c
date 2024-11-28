#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <esp_pm.h>

void app_main()
{
    esp_pm_config_t pm_config = {
        .max_freq_mhz = CONFIG_ESP32S3_DEFAULT_CPU_FREQ_MHZ,
        .min_freq_mhz = 40,
        .light_sleep_enable = true};
    ESP_ERROR_CHECK(esp_pm_configure(&pm_config));

    while (true)
    {
        printf("I aitn't dead!\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
