#############################################################################
# Makefile for building: RayTracingEst
# Generated by qmake (2.01a) (Qt 4.8.6) on: dl. de febr. 27 18:42:17 2017
# Project:  RayTracingEst.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile RayTracingEst.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT
CFLAGS        = -m64 -pipe -O2 -Wall -W $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++11 -O2 -Wall -W $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/opt/X11/include
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/opt/X11/lib -lGL -lglut 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = RayTracing.cpp \
		Scene.cpp \
		Object.cpp \
		Camera.cpp \
		Hitable.cpp \
		Material.cpp \
		Sphere.cpp \
		Lambertian.cpp \
		BoundaryObject.cpp \
		ReadFile.cpp \
		Cara.cpp \
		Triangle.cpp \
		Plane.cpp 
OBJECTS       = RayTracing.o \
		Scene.o \
		Object.o \
		Camera.o \
		Hitable.o \
		Material.o \
		Sphere.o \
		Lambertian.o \
		BoundaryObject.o \
		ReadFile.o \
		Cara.o \
		Triangle.o \
		Plane.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		deployment.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		RayTracingEst.pro
QMAKE_TARGET  = RayTracingEst
DESTDIR       = 
TARGET        = RayTracingEst

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: RayTracingEst.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		deployment.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile RayTracingEst.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
deployment.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -o Makefile RayTracingEst.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/RayTracingEst1.0.0 || $(MKDIR) .tmp/RayTracingEst1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/RayTracingEst1.0.0/ && (cd `dirname .tmp/RayTracingEst1.0.0` && $(TAR) RayTracingEst1.0.0.tar RayTracingEst1.0.0 && $(COMPRESS) RayTracingEst1.0.0.tar) && $(MOVE) `dirname .tmp/RayTracingEst1.0.0`/RayTracingEst1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/RayTracingEst1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

RayTracing.o: RayTracing.cpp RayTracing.h \
		Scene.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Object.h \
		Material.h \
		Lambertian.h \
		Plane.h \
		Sphere.h \
		Triangle.h \
		BoundaryObject.h \
		Cara.h \
		ReadFile.h \
		Camera.h \
		glm/gtc/matrix_transform.hpp \
		glm/gtc/matrix_transform.inl
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RayTracing.o RayTracing.cpp

Scene.o: Scene.cpp Scene.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Object.h \
		Material.h \
		Lambertian.h \
		Plane.h \
		Sphere.h \
		Triangle.h \
		BoundaryObject.h \
		Cara.h \
		ReadFile.h \
		Camera.h \
		glm/gtc/matrix_transform.hpp \
		glm/gtc/matrix_transform.inl
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Scene.o Scene.cpp

Object.o: Object.cpp Object.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Material.h \
		Lambertian.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Object.o Object.cpp

Camera.o: Camera.cpp Camera.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		glm/gtc/matrix_transform.hpp \
		glm/gtc/matrix_transform.inl \
		Ray.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Camera.o Camera.cpp

Hitable.o: Hitable.cpp Hitable.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Hitable.o Hitable.cpp

Material.o: Material.cpp Material.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Material.o Material.cpp

Sphere.o: Sphere.cpp Sphere.h \
		Object.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Material.h \
		Lambertian.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Sphere.o Sphere.cpp

Lambertian.o: Lambertian.cpp Lambertian.h \
		Material.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Lambertian.o Lambertian.cpp

BoundaryObject.o: BoundaryObject.cpp BoundaryObject.h \
		Object.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Material.h \
		Lambertian.h \
		Cara.h \
		ReadFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BoundaryObject.o BoundaryObject.cpp

ReadFile.o: ReadFile.cpp ReadFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ReadFile.o ReadFile.cpp

Cara.o: Cara.cpp Cara.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Cara.o Cara.cpp

Triangle.o: Triangle.cpp Triangle.h \
		Object.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Material.h \
		Lambertian.h \
		Scene.h \
		Plane.h \
		Sphere.h \
		BoundaryObject.h \
		Cara.h \
		ReadFile.h \
		Camera.h \
		glm/gtc/matrix_transform.hpp \
		glm/gtc/matrix_transform.inl
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Triangle.o Triangle.cpp

Plane.o: Plane.cpp Plane.h \
		Object.h \
		Ray.h \
		glm/glm.hpp \
		glm/core/_fixes.hpp \
		glm/core/setup.hpp \
		glm/core/_detail.hpp \
		glm/core/_vectorize.hpp \
		glm/core/type.hpp \
		glm/core/type_half.hpp \
		glm/core/type_half.inl \
		glm/core/type_float.hpp \
		glm/core/type_int.hpp \
		glm/core/type_gentype.hpp \
		glm/core/type_size.hpp \
		glm/core/type_vec1.hpp \
		glm/core/type_vec.hpp \
		glm/core/_swizzle.hpp \
		glm/core/_swizzle_func.hpp \
		glm/core/type_vec1.inl \
		glm/core/type_vec2.hpp \
		glm/core/type_vec2.inl \
		glm/core/type_vec3.hpp \
		glm/core/type_vec3.inl \
		glm/core/type_vec4.hpp \
		glm/core/type_vec4.inl \
		glm/core/type_mat2x2.hpp \
		glm/core/type_mat.hpp \
		glm/core/type_mat2x2.inl \
		glm/core/type_mat2x3.hpp \
		glm/core/type_mat2x3.inl \
		glm/core/type_mat2x4.hpp \
		glm/core/type_mat2x4.inl \
		glm/core/type_mat3x2.hpp \
		glm/core/type_mat3x2.inl \
		glm/core/type_mat3x3.hpp \
		glm/core/type_mat3x3.inl \
		glm/core/type_mat3x4.hpp \
		glm/core/type_mat3x4.inl \
		glm/core/type_mat4x2.hpp \
		glm/core/type_mat4x2.inl \
		glm/core/type_mat4x3.hpp \
		glm/core/type_mat4x3.inl \
		glm/core/type_mat4x4.hpp \
		glm/core/type_mat4x4.inl \
		glm/core/func_trigonometric.hpp \
		glm/core/func_trigonometric.inl \
		glm/core/func_exponential.hpp \
		glm/core/func_exponential.inl \
		glm/core/func_common.hpp \
		glm/core/func_common.inl \
		glm/core/func_packing.hpp \
		glm/core/func_packing.inl \
		glm/core/func_geometric.hpp \
		glm/core/func_geometric.inl \
		glm/core/func_matrix.hpp \
		glm/core/func_matrix.inl \
		glm/core/func_vector_relational.hpp \
		glm/core/func_vector_relational.inl \
		glm/core/func_integer.hpp \
		glm/core/func_integer.inl \
		glm/core/func_noise.hpp \
		glm/core/func_noise.inl \
		Hitable.h \
		Material.h \
		Lambertian.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Plane.o Plane.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/RayTracingEst/bin/ || $(MKDIR) $(INSTALL_ROOT)/opt/RayTracingEst/bin/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/opt/RayTracingEst/bin/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/opt/RayTracingEst/bin/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/opt/RayTracingEst/bin/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/RayTracingEst/bin/ 


install:  install_target  FORCE

uninstall: uninstall_target   FORCE

FORCE:

