
TARGET = ducksimulator

SOURCES = $(shell ls *.cpp)

BIT = $(shell getconf LONG_BIT)
ifeq ($(MAKECMDGOALS), BIT=32)
	BIT = 32
endif
ifeq ($(MAKECMDGOALS), BIT=64)
	BIT = 64
endif

CPPFLAGS   = -Wall -Wextra
ifeq ($(BIT), 64)
	CPPFLAGS += -m64
endif

ifeq ($(MAKECMDGOALS), OPTMODE=DEBUG)
	CPPFLAGS += -g
else
	CPPFLAGS += -O2
endif


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

