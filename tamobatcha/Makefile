#Makefile config
CPU			= msp430g2553
CFLAGS 			= -mmcu+${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/

#switch the compi
CC 		= msp430-elf-gcc
AS		= msp430-elf-gcc -mmcu=${CPU} -c

all: tamobatcha.elf

#addl rules
tamobatcha.elf: ${COMMON_OBJECTS} tamobatcha.o wdt_handler.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd

load tamobatcha.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf *~
