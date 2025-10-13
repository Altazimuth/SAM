#ifndef DEBUG_H
#define DEBUG_H

#include <stdint.h>
#include <vector>

void PrintPhonemes(const std::vector<uint8_t> &phonemeindex, const std::vector<uint8_t> &phonemeLength, const std::vector<uint8_t> &stress);
void PrintOutput(
	const std::vector<uint8_t> &flag,
	const std::vector<uint8_t> *const &f,
	const std::vector<uint8_t> *const &a,
	const std::vector<uint8_t> &p);

void PrintRule(unsigned short offset);

#endif
