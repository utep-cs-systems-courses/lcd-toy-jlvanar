#Makefile config

COMMON_OBJECTS		= 
CPU			= msp430g2553
CFLAGS 			= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/

#switch the compi
CC 		= msp430-elf-gcc
AS		= msp430-elf-gcc -mmcu=${CPU} -c
AR    		= msp430-elf-ar

all:tamobatcha.elf

#addl rules
tamobatcha.elf: ${COMMON_OBJECTS} buzzer.o led.o main.o p2_interrupt_handler.o shape.o state_machines.o switches.o wdt_handler.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd


load: tamobatcha.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf \#* *~

led.o: led.h

state_machines.o: led.h buzzer.h state_machines.h

buzzer.o: buzzer.h

switches.o: switches.h led.h state_machines.h buzzer.h

p2_interrupt_handler.o: switches.h
