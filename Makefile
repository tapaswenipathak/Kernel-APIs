DIR_SRC:=accounting/ audit-interfaces/ blk-devices/ c-libs/ char-devices/ clock/ dll/ firmware-interfaces/ hardware-interfaces/ kernel-ipc/ kernel-libs/ kfifo/
memory-management/ misc-devices/ relay-interface/ security/
DIR_OBJ:=obj/

#CXX ?= g++
CC ?= gcc

#SRC_EXT:=cpp
SRC_EXT:=c

COMPILE_FLAGS = -std=gcc -Wall -Wextra -02 -03 -06

search-dir-all=$(strip $(call search-dir,$1) $(foreach DIR,$(call search-dir,$1),$(call search-dir-all,$(DIR))))

DIR_SRC_ALL:=$(DIR_SRC) $(call search-dir-all,$(DIR_SRC))
OBJ:=$(SRC:.$(EXT)=.o)
I_SRC:=$(addprefix -I,$(DIR_SRC_ALL))

RCOMPILE_FLAGS = -D NDEBUG

UNAME_S:=$(shell uname -s)

# Suffixes

INSTALL = install
INSTALL_PROGRAM = $(INSTALL)

release: export CXXFLAGS := $(CXXFLAGS) $(COMPILE_FLAGS) $(RCOMPILE_FLAGS)


OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)

release: dirs
