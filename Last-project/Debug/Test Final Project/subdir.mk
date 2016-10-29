################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Test\ Final\ Project/Test\ Final\ Project.cpp \
../Test\ Final\ Project/stdafx.cpp \
../Test\ Final\ Project/stockListImp.cpp \
../Test\ Final\ Project/stockTypeImp.cpp 

OBJS += \
./Test\ Final\ Project/Test\ Final\ Project.o \
./Test\ Final\ Project/stdafx.o \
./Test\ Final\ Project/stockListImp.o \
./Test\ Final\ Project/stockTypeImp.o 

CPP_DEPS += \
./Test\ Final\ Project/Test\ Final\ Project.d \
./Test\ Final\ Project/stdafx.d \
./Test\ Final\ Project/stockListImp.d \
./Test\ Final\ Project/stockTypeImp.d 


# Each subdirectory must supply rules for building sources it contributes
Test\ Final\ Project/Test\ Final\ Project.o: ../Test\ Final\ Project/Test\ Final\ Project.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Test Final Project/Test Final Project.d" -MT"Test\ Final\ Project/Test\ Final\ Project.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Test\ Final\ Project/stdafx.o: ../Test\ Final\ Project/stdafx.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Test Final Project/stdafx.d" -MT"Test\ Final\ Project/stdafx.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Test\ Final\ Project/stockListImp.o: ../Test\ Final\ Project/stockListImp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Test Final Project/stockListImp.d" -MT"Test\ Final\ Project/stockListImp.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Test\ Final\ Project/stockTypeImp.o: ../Test\ Final\ Project/stockTypeImp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Test Final Project/stockTypeImp.d" -MT"Test\ Final\ Project/stockTypeImp.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


