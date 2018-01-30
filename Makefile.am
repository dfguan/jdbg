#original source: jellyfish Makefile.am
#Modifier: Dengfeng Guan
#Date: 18-01-29
ACLOCAL_AMFLAGS = -I m4

AM_LDFLAGS = -lpthread
AM_CPPFLAGS = -g -Wall -Wnon-virtual-dtor -I$(top_srcdir)
AM_CXXFLAGS = -g -O3
LDADD = libjdbg-0.1.0.la

# What to build
lib_LTLIBRARIES = libjdbg-0.1.0.la

bin_PROGRAMS = bin/jdbg


########################################
# Build jdbg the exec
########################################
bin_jdbg_SOURCES = 		jdbg.cc			\
                        lib/hash_merge.cc			\
                        lib/mer_counter.cc		\
						lib/dump_main.cc                 \
						lib/stats_main.cc                 \
						lib/yaggo.cpp                     

bin_jdbg_LDADD = libjdbg-0.1.0.la

bin_jdbg_LDFLAGS = $(AM_LDFLAGS) $(STATIC_FLAGS)


########################################
# Build jdbg the shared library
########################################
libjdbg_srcs = lib/square_binary_matrix.cc		\
                       lib/err.cc lib/misc.cc		\
                       lib/storage.cc lib/thread_exec.cc	\
                       lib/time.cc lib/file_parser.cc	\
                       lib/mapped_file.cc				\
                       lib/parse_dna.cc				\
                       lib/sequence_parser.cc			\
                       lib/dbg.cc lib/allocators_mmap.cc	\
                       lib/dna_codes.cc                   

libjdbg_0_1_0_la_SOURCES = $(libjdbg_srcs)
libjdbg_0_1_0_la_LDFLAGS = -version-info 0:1:0

library_includedir=$(includedir)/jdbg-@PACKAGE_VERSION@/jdbg
library_include_HEADERS = include/allocators_malloc.hpp		\
                          include/allocators_mmap.hpp			\
                          include/allocators_shm.hpp			\
                          include/atomic_gcc.hpp			\
                          include/compacted_dumper.hpp		\
                          include/compacted_hash.hpp			\
                          include/concurrent_queues.hpp		\
                          include/direct_indexing_array.hpp		\
                          include/direct_sorted_dumper.hpp		\
                          include/divisor.hpp include/dumper.hpp	\
                          include/hash_function.hpp			\
                          include/hash.hpp include/heap.hpp		\
                          include/invertible_hash_array.hpp		\
                          include/locking_hash_counters.hpp		\
                          include/locks_pthread.hpp			\
                          include/mapped_file.hpp			\
                          include/mer_counting.hpp			\
                          include/err.hpp include/misc.hpp		\
                          include/offsets_key_value.hpp		\
                          include/reversible_hash_function.hpp	\
                          include/sorted_dumper.hpp			\
                          include/square_binary_matrix.hpp		\
                          include/storage.hpp				\
                          include/thread_exec.hpp			\
                          include/time.hpp include/token_ring.hpp	\
                          include/raw_dumper.hpp			\
                          include/capped_integer.hpp			\
                          include/aligned_values_array.hpp		\
                          include/fastq_dumper.hpp			\
                          include/floats.hpp				\
                          include/circular_buffer.hpp			\
                          include/counter.hpp				\
                          include/parse_quake.hpp			\
                          include/parse_dna.hpp			\
                          include/parse_qual_dna.hpp			\
                          include/file_parser.hpp			\
                          include/sequence_parser.hpp			\
                          include/seq_qual_parser.hpp			\
                          include/double_fifo_input.hpp		\
                          include/read_parser.hpp			\
                          include/parse_read.hpp			\
                          include/simple_growing_array.hpp		\
                          include/toFloat.h include/eLut.h		\
                          include/dbg.hpp include/half.h		\
                          include/backtrace.hpp			\
                          include/dna_codes.hpp			\
                          include/simple_circular_buffer.hpp          \
						  include/evo_tree.hpp                        \
			  			  include/stats_main_cmdline.hpp



########
# info #
########
print-%:
	@echo -n $($*)
