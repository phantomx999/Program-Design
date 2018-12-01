CXX = /soft/gcc/7.1.0/Linux_x86_64/bin/g++
OMP = -fopenmp
CFILES:=$(shell ls | grep .c)
PROJECT_NAME = imagetools
CS3081DIR = $(shell git rev-parse --show-toplevel)
SRCDIR = .
PROJ_DIR = $(CS3081DIR)/PROJ
BUILDDIR = $(PROJ_DIR)/build
BINDIR = $(BUILDDIR)/bin
OBJDIR = $(BUILDDIR)/obj/$(PROJECT_NAME)
LIBDIR = $(BUILDDIR)/lib
EXTERNAL_DIR = $(PROJ_DIR)/src/external
MINGFX_DIR = $(EXTERNAL_DIR)/MinGfx/build/install
EXEFILE = $(BINDIR)/$(PROJECT_NAME)
SRCFILES = $(wildcard $(SRCDIR)/*.cc)
OBJFILES = $(notdir $(patsubst %.cc,%.o,$(SRCFILES)))
INCLUDEDIRS = -I.. -I$(SRCDIR) -I$(SRCDIR)/.. -isystem$(MINGFX_DIR)/include -isystem$(MINGFX_DIR)/include/nanovg -isystem$(MINGFX_DIR)/include/MinGfx-1.0
LIBDIRS = -L$(LIBDIR) -L$(MINGFX_DIR)/lib -L$(MINGFX_DIR)/lib/MinGfx-1.0 
LIBS =  -lMinGfxd -lnanogui -Wl,-rpath,$(MINGFX_DIR)/lib 
UNAME = $(shell uname)
ifeq ($(UNAME), Darwin) # Mac OSX
	LIBS += -framework glut -framework opengl
else # LINUX
	LIBS += -lglut -lGL -lGLU
endif

CXXFLAGS = -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c $(INCLUDEDIRS)

ifeq ($(UNAME), Darwin)
    CXXFLAGS += -Wno-unknown-warning-option
endif

LDFLAGS = $(LIBDIRS)

LDLIBS = $(LIBS)

-include ../../Makefile.local



.PHONY: clean all $(BINDIR) $(OBJDIR)


# The default target which will be run if the user just types "make"
all: $(MINGFX_DIR) $(EXEFILE) 

# This rule says that each .o file in $(OBJDIR)/ depends on the
# presence of the $(OBJDIR)/ directory.
$(addprefix $(OBJDIR)/, $(OBJFILES)): | $(OBJDIR)

# And, this rule provides a recipe for creating that objdir.  The same rule applies
# to the bindir, where the exe will be output.
$(OBJDIR) $(BINDIR):
	@mkdir -p $@



$(OBJDIR)/%.o: $(SRCDIR)/%.cc $(MINGFX_DIR)
	@echo "==== Auto-Generating Dependencies for $<. ===="
	$(call make-depend-cxx,$<,$@,$(subst .o,.d,$@))
	@echo "==== Compiling $< into $@. ===="
	$(CXX) $(OMP) $(CXXFLAGS) $(CXXLIBDIRS) -c -fPIC -o  $@ $<

make-depend-cxx=$(CXX) -MM -MF $3 -MP -MT $2 $(CXXFLAGS) $1

-include $(addprefix $(OBJDIR)/,$(OBJFILES:.o=.d))



$(EXEFILE): $(addprefix $(OBJDIR)/, $(OBJFILES)) | $(BINDIR)
	@echo "==== Linking $@. ===="
	#$(CXX) $(OMP) $(LDFLAGS) $(addprefix $(OBJDIR)/, $(OBJFILES)) -o $@ $(LDLIBS)
	ar rcs libimagetools.a $(addprefix $(OBJDIR)/, $(OBJFILES)) -o $@ $(LDLIBS)
	mv $(addprefix $(OBJDIR)/, $(OBJFILES)) ../../build/obj #$(OBJDIR)
	mv libimagetools.a ../../build/lib #$(LIBDIR)

check-style:
	@echo "==== Checking style is correct ===="
	$(CS3081DIR)/cpplint/cpplint.py --root=.. *.cc *.h

check-style-cse:
	@echo "==== Checking style is correct ===="
	$(CS3081DIR)/cpplint/cpplint-cse.sh --root=.. *.cc *.h

$(MINGFX_DIR):
	cd $(EXTERNAL_DIR)/MinGfx; make

# Clean up the project, removing ALL files generated during a build.
clean:
	@rm -rf $(OBJDIR)
	@rm -rf $(EXEFILE)
