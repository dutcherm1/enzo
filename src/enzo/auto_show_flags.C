#include <stdio.h>
void auto_show_flags(FILE *fp) {
   fprintf (fp,"\n");
   fprintf (fp,"CPP = /scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin/mpicc\n");
   fprintf (fp,"CC  = /scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin/mpicc\n");
   fprintf (fp,"CXX = /scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin/mpicxx\n");
   fprintf (fp,"FC  = /scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin/mpif77\n");
   fprintf (fp,"F90 = /scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin/mpif90\n");
   fprintf (fp,"LD  = /scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/bin/mpicxx\n");
   fprintf (fp,"\n");
   fprintf (fp,"DEFINES = -DLINUX -DH5_USE_16_API -DWINDS -DIO_LOG -DOMPI_SKIP_MPICXX  -D__max_subgrids=100000 -D__max_baryons=30 -D__max_cpu_per_node=8 -D__memory_pool_size=100000 -DINITS64 -DLARGE_INTS -DCONFIG_PINT_8 -DIO_32    -DUSE_MPI   -DCONFIG_PFLOAT_8 -DCONFIG_BFLOAT_8  -DUSE_HDF5_GROUPS   -DTRANSFER   -DNEW_GRID_IO -DFAST_SIB      -DENZO_PERFORMANCE    -DSAB\n");
   fprintf (fp,"\n");
   fprintf (fp,"INCLUDES =  -I/scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/mpi/intel64/include           -I.\n");
   fprintf (fp,"\n");
   fprintf (fp,"CPPFLAGS = -P -traditional\n");
   fprintf (fp,"CFLAGS   =  -O0 -g\n");
   fprintf (fp,"CXXFLAGS =  -O0 -g\n");
   fprintf (fp,"FFLAGS   = -fno-second-underscore -O0 -g\n");
   fprintf (fp,"F90FLAGS = -fno-second-underscore -O0 -g\n");
   fprintf (fp,"LDFLAGS  =  -O0 -g\n");
   fprintf (fp,"\n");
   fprintf (fp,"LIBS     = -L/scinet/niagara/software/2018a/opt/intel-2018.3/hdf5/1.8.20/lib -lhdf5 -lz  -L/scinet/niagara/intel/2018.3/compilers_and_libraries_2018.3.222/linux/bin/intel64/lib/intel64 -limf -lifcore -lifport -lstdc++ -lgfortran -L/usr/lib64/ -lgpfs        \n");
   fprintf (fp,"\n");
}
