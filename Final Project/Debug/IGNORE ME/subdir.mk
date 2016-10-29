################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../IGNORE\ ME/project.cpp 

OBJS += \
./IGNORE\ ME/project.o 

CPP_DEPS += \
./IGNORE\ ME/project.d 


# Each subdirectory must supply rules for building sources it contributes
IGNORE\ ME/project.o: ../IGNORE\ ME/project.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"IGNORE ME/project.d" -MT"IGNORE\ ME/project.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


