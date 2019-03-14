CC=gcc
LINK=gcc
CFLAGS=-c -Wall -I
OBJECT_FILES= SensorGuncelleme.o Alarm.o test.o

.SUFFIXES: .c .o

.c .o:
	$(CC) $(CFLAGS) $^ -o $@ $<

test: $(OBJECT_FILES)
	$(LINK) $(OBJECT_FILES) -o $@

SensorGuncelleme.o: SensorGuncelleme.c SensorGuncelleme.h Sensor.h
Alarm.o: Alarm.c Alarm.h Sensor.h SensorGuncelleme.h
test: Sensor.h Alarm.h SensorGuncelleme.h test.c
