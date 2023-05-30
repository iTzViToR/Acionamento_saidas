//Blink

#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"
#include "freertos/event_groups.h"
#include "freertos/queue.h"

#define led_blue GPIO_NUM_2
#define configTICK_RATE_HZ 100




void pisca_S(int temp)
{
     for(int i=0;i<6;i++){
        
        gpio_set_level(led_blue, !gpio_get_level(led_blue));
        vTaskDelay(temp / portTICK_PERIOD_MS);
     }
}
void pisca_O(int temp)
{
     for(int i=0;i<6;i++){
        
        gpio_set_level(led_blue, !gpio_get_level(led_blue));
        vTaskDelay(temp / portTICK_PERIOD_MS);
     }
}

void app_main(void)
{
    gpio_set_direction(led_blue,GPIO_MODE_INPUT_OUTPUT);
    while (1)
    {
        pisca_S(500);
        pisca_O(1000);
        pisca_S(500);
    }
    
   
}
