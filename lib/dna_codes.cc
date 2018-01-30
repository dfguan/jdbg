#include <stdint.h>

#include <include/dna_codes.hpp>

#define R -1
#define I -2
#define O -3
#define A 0
#define C 1
#define G 2
#define T 3
const char jellyfish::dna_codes[256] = {
  O, O, O, O, O, O, O, O, O, O, I, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, R, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, A, R, C, R, O, O, G, R, O, O, R, O, R, R, O, 
  O, O, R, R, T, O, R, R, R, R, O, O, O, O, O, O, 
  O, A, R, C, R, O, O, G, R, O, O, R, O, R, R, O, 
  O, O, R, R, T, O, R, R, R, R, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, 
  O, O, O, O, O, O, O, O, O, O, O, O, O, O, O, O
};

const uint8_t jellyfish::in_out_degree_code[128] = {
		16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,
		16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,
		16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,
		16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,
		16,1,16,2,16,16,16,4,16,16,16,16,16,16,16,16,
		16,16,16,16,8,16,16,16,16,16,16,16,16,16,16,16,
		16,1,16,2,16,16,16,4,16,16,16,16,16,16,16,16,
		16,16,16,16,8,16,16,16,16,16,16,16,16,16,16,16
};

const char jellyfish::rev_com_code[128] = {
		'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N',
		'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N',
		'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N',
		'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N',
		'N','T','N','G','N','N','N','C','N','N','N','N','N','N','N','N',
		'N','N','N','N','A','N','N','N','N','N','N','N','N','N','N','N',
		'N','T','N','G','N','N','N','C','N','N','N','N','N','N','N','N',
		'N','N','N','N','A','N','N','N','N','N','N','N','N','N','N','N'
};
