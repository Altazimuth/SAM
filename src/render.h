#ifndef RENDER_H
#define RENDER_H

#include <stdint.h>

void Render();
void SetMouthThroat(unsigned char mouth, unsigned char throat);

void ProcessFrames(uint16_t mem48);
void RenderSample(unsigned char *mem66, unsigned char consonantFlag, uint16_t mem49);
uint16_t CreateTransitions();

#define PHONEME_PERIOD (1)
#define PHONEME_QUESTION (2)

#define RISING_INFLECTION (1)
#define FALLING_INFLECTION (255)

#endif
