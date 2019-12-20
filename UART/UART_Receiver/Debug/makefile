################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/UART_driver/subdir.mk
-include MCAL/TIMER_driver/subdir.mk
-include MCAL/Sleep_driver/subdir.mk
-include MCAL/DIO_driver/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Uart2.lss \

FLASH_IMAGE += \
Uart2.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Uart2.elf secondary-outputs

# Tool invocations
Uart2.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Uart2.map -mmcu=atmega32 -o "Uart2.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Uart2.lss: Uart2.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Uart2.elf  >"Uart2.lss"
	@echo 'Finished building: $@'
	@echo ' '

Uart2.hex: Uart2.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Uart2.elf  "Uart2.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Uart2.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Uart2.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Uart2.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
