################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LED_program.c \
../main.c 

OBJS += \
./LED_program.o \
./main.o 

C_DEPS += \
./LED_program.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\MCAL\UART_driver" -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\MCAL\TIMER_driver" -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\MCAL\Sleep_driver" -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\MCAL\DIO_driver" -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\Registers" -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\Service" -I"C:\Users\mosta\Desktop\IMT-C\UART_driver\Infrastructure" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


