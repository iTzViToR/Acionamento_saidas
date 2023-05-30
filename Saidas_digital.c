//Criado por Vitor Hugo Teixeira Corrêa.

#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"
#include "freertos/event_groups.h"
#include "freertos/queue.h"

#define DATA GPIO_NUM_27  
#define CLOCK GPIO_NUM_12
#define REGISTER GPIO_NUM_14

#define configTICK_RATE_HZ 100

void aciona(void)
{

//1
gpio_set_level(DATA,1);

for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//2

for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//3

for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

 //4

 
for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//5


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//6


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//7


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);


//8


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);



}
void desaciona(void)
{

//apaga

//1
gpio_set_level(DATA,0);

for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//2

for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//3

for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

 //4

 
for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//5


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//6


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);

//7


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);


//8


for(int i=0;i<1;i++){  

 gpio_set_level(CLOCK,1);
 vTaskDelay(5 / portTICK_PERIOD_MS);
 gpio_set_level(CLOCK,0); 
 vTaskDelay(5 / portTICK_PERIOD_MS);
}

gpio_set_level(REGISTER,1);
vTaskDelay(5 / portTICK_PERIOD_MS);
gpio_set_level(REGISTER,0);
 vTaskDelay(5 / portTICK_PERIOD_MS);

 vTaskDelay(1500 / portTICK_PERIOD_MS);


}

void app_main(void)

{

 int DADO=0xAA;   
    
gpio_reset_pin(DATA); 
gpio_reset_pin(CLOCK); 
gpio_reset_pin(REGISTER);   

gpio_set_direction(DATA,GPIO_MODE_OUTPUT);
gpio_set_direction(CLOCK,GPIO_MODE_OUTPUT);
gpio_set_direction(REGISTER,GPIO_MODE_OUTPUT);


while(1)
{
    aciona();
    vTaskDelay(1500 / portTICK_PERIOD_MS);
    desaciona();
}
    vTaskDelay(1500 / portTICK_PERIOD_MS);
 


}
