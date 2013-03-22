
TARGET = ducksimulator

SOURCES = DecoyDuck.cpp \
          Duck.cpp \
          FakeQuack.cpp \
          FlyBehavior.cpp \
          FlyNoWay.cpp \
          FlyRocketPowered.cpp \
          FlyWithWings.cpp \
          MallardDuck.cpp \
          MiniDuckSimulator.cpp \
          ModelDuck.cpp \
          MuteQuack.cpp \
          Quack.cpp \
          QuackBehavior.cpp \
          RedHeadDuck.cpp \
          RubberDuck.cpp \
          Squeak.cpp 

CPPFLAGS   = -O2 -Wall 
CC       = g++
LD       = ld
AR       = ar
AS       = gcc
GASP     = gasp
NM       = nm
OBJCOPY  = objcopy
RANLIB   = ranlib
STRIP    = strip
SIZE     = size
READELF  = readelf
CP       = cp -p
RM       = rm -f
MV       = mv

DEPEND = $(SOURCES:.cpp=.d)

OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	echo "Linking $@"
	$(CC) $(OBJECTS) -o $@
	echo
	echo ">>>> BUILD DONE <<<<"
	echo

%.o: %.cpp
	echo "Compiling $<"
	$(CC) -c $(CFLAGS) -o $@ $<

# include the dependencies unless we're going to clean 
ifneq ($(MAKECMDGOALS), clean)
-include $(DEPEND)
endif

# dependencies file
# includes also considered, since some of these are our own
# (otherwise use -MM instead of -M)
%.d: %.cpp
	echo "Generating dependencies $@ from $<"
	$(CC) -MM ${CFLAGS} $< > $@

.SILENT:
.PHONY:	clean

clean:
	-$(RM) $(OBJECTS)
	-$(RM) $(TARGET)
	-$(RM) $(DEPEND)

